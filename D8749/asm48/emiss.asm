.equ MRT0, 32
.equ MRT1, 33
.equ MRT2, 34
.equ MRT3, 35
.equ MRT4, 36

.equ M_IN00, 37
.equ M_IN01, 38
.equ M_IN02, 39
.equ M_IN03, 40
.equ M_IN10, 41
.equ M_IN11, 42
.equ M_IN12, 43
.equ M_IN13, 44
.equ M_RES0, 45
.equ M_RES1, 46
.equ M_RES2, 47
.equ M_RES3, 48
.equ M_RES4, 49
.equ BLINK_STATE, 50
.equ STEP0, 51
.equ STEP1, 52

.equ PREV0, 53
.equ PREV1, 54
.equ PREV2, 55
.equ DIFF0, 56
.equ DIFF1, 57
.equ DIFF2, 58
.equ DIFF3, 59
.equ CURR0, 60
.equ CURR1, 61
.equ CURR2, 62
.equ BTN_COUNTER, 63
.equ BTN_HELD, 21
.equ SPEED_SETTING, 22
.equ SPEED_SETTING_DISPLAY, 23

START:
	DIS I
	DIS TCNTI
	STRT T
	MOV A,PSW
	ANL A,#0b11101000
	MOV PSW,A
	MOV R0, #BLINK_STATE
	CLR A
	MOV @R0, A
	MOV R0, #SPEED_SETTING_DISPLAY
	MOV @R0, A
	MOV R0, #BTN_COUNTER
	MOV @R0, A
	MOV A, #0xFF
	OUTL P1, A
	CALL UART_INIT
	SEL RB1
	MOV R4, #0x22
	MOV R5, #0x1B
	MOV R6, #0xF9
	MOV R7, #0xBD
	SEL RB0
	CALL BUTTON_EVENT
	JMP PGM_START

SET_DIGIT:
	MOV R0, #SPEED_SETTING_DISPLAY
	MOV A, @R0
	ADD A, #DIGITS
	MOVP A, @A
	XRL A, #0xFF
	MOV R0, A
	MOV R1, #BLINK_STATE
	MOV A, @R1
	JZ NO_DP
	MOV A, R0
	ANL A, #0b01111111
	OUTL P1, A
	RET
NO_DP:
	MOV A, R0
	OUTL P1, A
	RET
DIGITS:
.db 0b01101111
.db 0b00101000
.db 0b01011101
.db 0b01111001
.db 0b00111010
.db 0b01110011
.db 0b01110111
.db 0b00101001
.db 0b01111111
.db 0b01111011
.db 0b00111111
.db 0b01110110
.db 0b01000111
.db 0b01111100
.db 0b01010111
.db 0b00010111

UART_WRITE:
	ANL P2,#249
	OUTL BUS,A
	ORL P2,#2
UART_WRITE_DELAY_LOOP:
	IN A,P2
	ANL A,#8
	JZ UART_WRITE_DELAY_LOOP
	RET

	;Connection of P8251 to microcontroller:
	;DB - DB7 = D0 - D7
	;P20 = RESET
	;P21 = CS (may be omitted, and CS pulled to GND on P8251, if only device on bus)
	;P22 = C/D
	;P23 = TxEMPTY
UART_INIT:
	MOV A,#0b00001111
	OUTL P2,A
	CALL DELAY
	ANL P2,#254
	CALL DELAY
	ANL P2,#253
	MOV A,#0b01001110 ; Mode word: 1 stop bit, no parity, 8-bit, 16X baud rate divisor
	OUTL BUS,A
	MOV A,#0b00110011 ; Command word: Enable TX, but not RX, reset error flags
	OUTL BUS,A
	ORL P2,#2
	RET

DELAY:
	MOV A,#0xFF
DELAY_LOOP:
	ADD A,#0xFF
	NOP
	NOP
	NOP
	NOP
	NOP
	NOP
	NOP
	NOP
	JNZ DELAY_LOOP
	RETR

    ;Multiplies two 32-bit integers, producing a 56-bit result that is then right-shifted to 32-bits
    ;Uses dedicated memory locations for arguments and result
MUL_FIXED:
    CLR F1
    CPL F1

    MOV R0, #M_IN03
    MOV A, @R0
    ANL A, #0x80
    JZ NOT_NEG_1

    CLR C
    CPL C
    CPL F1
    MOV R5, #4
    MOV R0, #M_IN00
NEG_LOOP_1:
    MOV A, #0xFF
    XRL A, @R0
    ADDC A, #0
    MOV @R0, A
    INC R0
    DJNZ R5, NEG_LOOP_1

NOT_NEG_1:
    MOV R0, #M_IN13
    MOV A, @R0
    ANL A, #0x80
    JZ NOT_NEG_2

    CLR C
    CPL C
    CPL F1
    MOV R5, #4
    MOV R0, #M_IN10
NEG_LOOP_2:
    MOV A, #0xFF
    XRL A, @R0
    ADDC A, #0
    MOV @R0, A
    INC R0
    DJNZ R5, NEG_LOOP_2

NOT_NEG_2:

    MOV R0, #M_RES0
    CLR A
    MOV @R0, A
    INC R0
    MOV @R0, A
    INC R0
    MOV @R0, A
    INC R0
    MOV @R0, A
    INC R0
    MOV @R0, A

    MOV R7, A
MUL_FIXED_LOOP:
    MOV A, R7
    JB2 MUL_FIXED_LOOP_END
    ADD A, #M_IN10
    MOV R0, A
    MOV A, @R0
    INC R7
    MOV R6, A

    MOV R0, #M_IN00
    MOV A, @R0
    MOV R1, A
    INC R0

    MOV A, @R0
    MOV R2, A
    INC R0

    MOV A, @R0
    MOV R3, A
    INC R0

    MOV A, @R0
    MOV R4, A

    CALL MUL_8_32

    CLR C
    MOV R6, #4
    MOV R0, #M_RES1
    MOV R1, #MRT0
MUL_FIXED_ADD_LOOP:
    MOV A, @R1
    ADDC A, @R0
    DEC R0
    MOV @R0, A
    INC R0
    INC R0
    INC R1
    DJNZ R6, MUL_FIXED_ADD_LOOP
    MOV A, @R1
    ADDC A, #0
    DEC R0
    MOV @R0, A

    JMP MUL_FIXED_LOOP

MUL_FIXED_LOOP_END:

    JF1 RES_NOT_NEGATIVE

    CLR C
    CPL C
    MOV R5, #4
    MOV R0, #M_RES0
NEG_LOOP_3:
    MOV A, #0xFF
    XRL A, @R0
    ADDC A, #0
    MOV @R0, A
    INC R0
    DJNZ R5, NEG_LOOP_3

RES_NOT_NEGATIVE:

    RETR

    ;R1 - R5: 40-bit value
    ;R6: 8-bit multiplier
    ;R0 as pointer
    ;Result in RAM
MUL_8_32:
    CLR A
    MOV R5, A
    MOV R0, MRT0
    MOV @R0, A
    INC R0
    MOV @R0, A
    INC R0
    MOV @R0, A
    INC R0
    MOV @R0, A
    INC R0
    MOV @R0, A
    MOV R0, MRT0
    MOV A, R6
MUL_8_32_LOOP:
    CLR C
    RRC A
    MOV R6, A
    JNC MUL_8_32_NO_CARRY
MUL_8_32_CARRY:
    MOV A, R1
    ADD A, @R0
    MOV @R0, A
    INC R0
    MOV A, R2
    ADDC A, @R0
    MOV @R0, A
    INC R0
    MOV A, R3
    ADDC A, @R0
    MOV @R0, A
    INC R0
    MOV A, R4
    ADDC A, @R0
    MOV @R0, A
    INC R0
    MOV A, R5
    ADDC A, @R0
    MOV @R0, A
    MOV R0, MRT0
    CLR C
MUL_8_32_NO_CARRY:
    MOV A, R1
    RLC A
    MOV R1, A
    MOV A, R2
    RLC A
    MOV R2, A
    MOV A, R3
    RLC A
    MOV R3, A
    MOV A, R4
    RLC A
    MOV R4, A
    MOV A, R5
    RLC A
    MOV R5, A
    MOV A, R6
    JNZ MUL_8_32_LOOP
    RET

XORSHIFT:
    SEL RB1

    CLR A
    MOV A, R4
    MOV R1, A
    MOV A, R5
    MOV R2, A
    MOV A, R6
    MOV R3, A
    MOV R0, #5
XORSHIFT_LOOP_1:
    CLR C
    MOV A, R1
    RLC A
    MOV R1, A
    MOV A, R2
    RLC A
    MOV R2, A
    MOV A, R3
    RLC A
    MOV R3, A
    DJNZ R0, XORSHIFT_LOOP_1

    MOV A, R1
    XRL A, R5
    MOV R5, A
    MOV A, R2
    XRL A, R6
    MOV R6, A
    MOV A, R3
    XRL A, R7
    MOV R7, A

    CLR C
    MOV A, R7
    RRC A
    XRL A, R5
    MOV R5, A
    MOV A, R6
    RRC A
    XRL A, R4
    MOV R4, A

    CLR C
    MOV A, R4
    RLC A
    MOV R0, A
    MOV A, R5
    RLC A
    MOV R1, A
    MOV A, R6
    RLC A
    MOV R2, A
    MOV A, R7
    RLC A
    MOV R3, A

    CLR C
    MOV A, R0
    RLC A
    MOV R0, A
    MOV A, R1
    RLC A
    MOV R1, A
    MOV A, R2
    RLC A
    MOV R2, A
    MOV A, R3
    RLC A
    MOV R3, A

    CLR C
    MOV A, R0
    RLC A
    MOV R0, A
    MOV A, R1
    RLC A
    MOV R1, A
    MOV A, R2
    RLC A
    MOV R2, A
    MOV A, R3
    RLC A
    MOV R3, A

    CLR C
    MOV A, R0
    RLC A
    MOV R0, A
    MOV A, R1
    RLC A
    MOV R1, A
    MOV A, R2
    RLC A
    MOV R2, A
    MOV A, R3
    RLC A
    MOV R3, A

    CLR C
    MOV A, R0
    RLC A
    MOV R0, A
    MOV A, R1
    RLC A
    MOV R1, A
    MOV A, R2
    RLC A
    MOV R2, A
    MOV A, R3
    RLC A
    MOV R3, A

    MOV A, R0
    XRL A, R4
    MOV R4, A
    MOV A, R1
    XRL A, R5
    MOV R5, A
    MOV A, R2
    XRL A, R6
    MOV R6, A
    MOV A, R3
    XRL A, R7
    MOV R7, A

    MOV A, R6

    SEL RB0
    RETR

CALC_WEIGHT:
	; COMPUTE 3x²-2x³, output in M_IN0x
	MOV R0, #STEP0
	MOV A, @R0
	MOV R5, A
	INC R0
	MOV A, @R0
	MOV R6, A

	MOV R0, #M_IN00
	CLR A
	MOV @R0, A
	INC R0
	MOV A, R5
	MOV @R0, A
	INC R0
	MOV A, R6
	MOV @R0, A
	CLR A
	INC R0
	MOV @R0, A
	INC R0
	MOV @R0, A
	INC R0
	MOV A, R5
	MOV @R0, A
	INC R0
	MOV A, R6
	MOV @R0, A
	CLR A
	INC R0
	MOV @R0, A

	CALL MUL_FIXED

	MOV R0, #M_RES0
	MOV R1, #M_IN00
	MOV R2, #4
COPY_LOOP0:
	MOV A, @R0
	MOV @R1, A
	INC R0
	INC R1
	DJNZ R2, COPY_LOOP0

	CALL MUL_FIXED

	MOV R1, #M_RES0 ; x*x*x

	CLR C
	MOV R2, #4
ADD_LOOP0:
	MOV A, @R1
	ADDC A, @R1
	MOV @R1, A
	INC R1
	DJNZ R2, ADD_LOOP0

	MOV R0, #M_IN00 ; x*x
	MOV R1, #4
	MOV R2, #4
COPY_LOOP2:
	MOV A, @R0
	MOV @R1, A
	INC R0
	INC R1
	DJNZ R2, COPY_LOOP2

	NOP
	NOP
	NOP
	NOP
	NOP
	NOP
	NOP
	NOP
	NOP
	NOP
	NOP
	NOP
	NOP
	CLR F0
ADD_LOOP1_REPEAT:
	CLR C
	MOV R0, #M_IN00 ; x*x
	MOV R1, #4
	MOV R2, #4
ADD_LOOP1:
	MOV A, @R0
	ADDC A, @R1
	MOV @R0, A
	INC R0
	INC R1
	DJNZ R2, ADD_LOOP1

	CPL F0
	JF0 ADD_LOOP1_REPEAT

	MOV R0, #M_IN00 ; x*x
	MOV R1, #M_RES0 ; x*x*x
	MOV R3, #4
	CLR C
	CPL C
SUB_LOOP0:
	MOV A, @R1
	XRL A, #0xFF
	ADDC A, @R0
	MOV @R0, A
	INC R0
	INC R1
	DJNZ R3, SUB_LOOP0

	RET

PGM_START:
	MOV R0, #STEP0
	CLR A
	MOV @R0, A
	INC R0
	MOV @R0, A
	INC R0
	MOV @R0, A
	INC R0
	MOV @R0, A
	INC R0
	MOV @R0, A
	JMP NEXT_RANDOM_VALUE
LOOP:
	;IN A, P1
	;ANL A, #0xF0
	;SWAP A
	;MOV R5, A
	;RR A
	;RR A
	;ANL A, #3
	;MOV R6, A
	;MOV A, R5
	;RL A
	;RL A
	;RL A
	;RL A
	;RL A
	;RL A
	;ANL A, #192
	;MOV R5, A
	;INC R5

	JNT0 BTN_RELEASED
	MOV R0, #BTN_HELD
	MOV A, @R0
	JNZ BTN_CONTINUE
	MOV R0, #BTN_COUNTER
	INC @R0
	MOV A, @R0
	ANL A, #8
	JZ BTN_CONTINUE
	MOV R0, #BTN_HELD
	MOV @R0, #1
	CALL BUTTON_EVENT
	JMP BTN_CONTINUE
BTN_RELEASED:
	CLR A
	MOV R0, #BTN_COUNTER
	MOV @R0, A
	MOV R0, #BTN_HELD
	MOV @R0, A
BTN_CONTINUE:

	MOV R1, #SPEED_SETTING
	MOV R3, #0xF0
	MOV A, @R1
	ANL A, R3
	SWAP A
	MOV R6, A
	MOV A, @R1
	RL A
	RL A
	RL A
	RL A
	ANL A, R3
	MOV R5, A

	MOV R0, #STEP0
	MOV A, @R0
	ADD A, R5
	MOV @R0, A
	INC R0
	MOV A, @R0
	ADDC A, R6
	MOV @R0, A
	JC NEXT_RANDOM_VALUE
	JMP CONTINUE_NORMALLY
NEXT_RANDOM_VALUE:
	MOV R0, #STEP0
	CLR A
	MOV @R0, A
	INC R0
	MOV @R0, A

	MOV R0, #BLINK_STATE
	MOV A, #0xFF
	XRL A, @R0
	MOV @R0, A
	CALL SET_DIGIT

	MOV R0, #CURR0
	MOV R1, #PREV0
	MOV R2, #3
COPY_LOOP3:
	MOV A, @R0
	MOV @R1, A
	INC R0
	INC R1
	DJNZ R2, COPY_LOOP3

	CALL XORSHIFT

	SEL RB1
	MOV R0, #CURR0
	MOV A, R5
	MOV @R0, A
	INC R0
	MOV A, R7
	MOV @R0, A
	INC R0
	MOV A, R6
	MOV @R0, A
	SEL RB0

	MOV R0, #CURR0
	MOV R1, #PREV0
	SEL RB1
	MOV R0, #DIFF0
	SEL RB0
	MOV R3, #3
	CLR C
	CPL C
	NOP
	NOP
	NOP
	NOP
	NOP
SUB_LOOP1:
	MOV A, @R1
	XRL A, #0xFF
	ADDC A, @R0
	SEL RB1
	MOV @R0, A
	INC R0
	SEL RB0
	INC R0
	INC R1
	DJNZ R3, SUB_LOOP1
	CLR A
	ADDC A, #0xFF
	SEL RB1
	MOV @R0, A
	SEL RB0

CONTINUE_NORMALLY:

	CALL CALC_WEIGHT

	MOV R0, #DIFF0
	MOV R1, #M_IN10
	MOV R3, #4
COPY_LOOP1:
	MOV A, @R0
	MOV @R1, A
	INC R0
	INC R1
	DJNZ R3, COPY_LOOP1

	CALL MUL_FIXED

	MOV R0, #PREV0
	MOV R1, #M_RES0

	MOV A, @R0
	ADD A, @R1
	MOV @R1, A
	INC R0
	INC R1
	MOV A, @R0
	ADDC A, @R1
	MOV @R1, A
	INC R0
	INC R1
	MOV A, @R0
	ADDC A, @R1
	MOV @R1, A
	INC R1
	CLR A
	ADDC A, @R1
	MOV @R1, A

	MOV R0, #M_RES0
	MOV R4, #3
SEND_LOOP:
	MOV A, @R0
	ANL A, #0x0F
	ADD A, #32 ;' '
	CALL UART_WRITE
	MOV A, @R0
	SWAP A
	ANL A, 0x0F
	ADD A, #32 ;' '
	CALL UART_WRITE
	INC R0
	DJNZ R4, SEND_LOOP
	MOV A, #35 ;'#'
	CALL UART_WRITE

	JMP LOOP

BUTTON_EVENT:
	SEL RB1
	NOP
	MOV R0, #SPEED_SETTING_DISPLAY
	MOV A, @R0
	INC A
	MOV @R0, A
	ADD A, #0b11111001
	JNC AA1
	MOV @R0, #1
AA1:
	MOV A, @R0
	MOV R1, #SPEED_SETTING
	DEC A
	ADD A, #SPEED_GRADES&0xFF
	MOVP A, @A
	MOV @R1, A
	SEL RB0
	CALL SET_DIGIT
	RET
SPEED_GRADES:
.db 7,14,21,29,42,57
