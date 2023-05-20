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

START:
    DIS I
    DIS TCNTI
    SEL RB0
    STRT T
    CALL UART_INIT
    SEL RB1
    MOV R4, #0x22
    MOV R5, #0x1B
    MOV R6, #0xF9
    MOV R7, #0xBD
    SEL RB0
    JMP PGM_BEGIN

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
    CPL F1
    MOV R5, #4
    MOV R0, #M_IN00
NEG_LOOP_1:
    MOV A, #0xFF
    XRL A, @R0
    ADDC A, #1
    MOV @R0, A
    INC R0
    DJNZ R5, NEG_LOOP_1

NOT_NEG_1:
    MOV R0, #M_IN13
    MOV A, @R0
    ANL A, #0x80
    JZ NOT_NEG_2

    CLR C
    CPL F1
    MOV R5, #4
    MOV R0, #M_IN10
NEG_LOOP_2:
    MOV A, #0xFF
    XRL A, @R0
    ADDC A, #1
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
    MOV R5, #4
    MOV R0, #M_RES0
NEG_LOOP_3:
    MOV A, #0xFF
    XRL A, @R0
    ADDC A, #1
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
    
PRINT_HEX:
    SEL RB1
    MOV R1, A
    CLR F0
    SWAP A
PRINT_HEX_DIGIT:
    ANL A, #15
    MOV R2, A
    ADD A, #0b11110110
    JC ABOVE_10_A
    MOV A, R2
    ADD A, #48
    JMP NOT_ABOVE_10_A
ABOVE_10_A:
    ADD A, #65
NOT_ABOVE_10_A:
    CALL UART_WRITE
    
    JF0 PRINT_HEX_END
    CPL F0
    MOV A, R1
    JMP PRINT_HEX_DIGIT
    
PRINT_HEX_END:
    SEL RB0
    RETR
    
NEWL:
    MOV A, #13
    CALL UART_WRITE
    MOV A, #10
    CALL UART_WRITE
    RET

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
	JNZ DELAY_LOOP
	RETR

	; With R1 pointing to most-significant byte
PRINT_NUM:
    MOV A, @R1
    JB7 PRINT_NEG_NUM
PRINT_POS_NUM:
    MOV A, @R1
    DEC R1
    CALL PRINT_HEX
    MOV A, #46 ;'.'
    CALL UART_WRITE
    MOV A, @R1
    DEC R1
    CALL PRINT_HEX
    MOV A, @R1
    DEC R1
    CALL PRINT_HEX
    MOV A, @R1
    CALL PRINT_HEX
    RET
PRINT_NEG_NUM:
    DEC R1
    DEC R1
    DEC R1
    MOV A, #45 ;'-'
    CALL UART_WRITE

    MOV A, #0xFF
    XRL A, @R1
    ADD A, #1
    MOV R4, A
    INC R1
    MOV A, #0xFF
    XRL A, @R1
    ADDC A, #1
    MOV R5, A
    INC R1
    MOV A, #0xFF
    XRL A, @R1
    ADDC A, #1
    MOV R6, A
    INC R1
    MOV A, #0xFF
    XRL A, @R1
    ADDC A, #1
    MOV R7, A

    MOV A, R7
    CALL PRINT_HEX
    MOV A, #46 ;'.'
    CALL UART_WRITE
    MOV A, R6
    CALL PRINT_HEX
    MOV A, R5
    CALL PRINT_HEX
    MOV A, R4
    CALL PRINT_HEX

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

PGM_BEGIN:
    CALL DELAY
    MOV R0, #M_IN13
    MOV A, #0x2C
    MOV @R0, A
    DEC R0

    MOV A, #0x11
    MOV @R0, A
    DEC R0

    MOV A, #0xAB
    MOV @R0, A
    DEC R0

    MOV A, #0x05
    MOV @R0, A
    DEC R0

    MOV R1, #M_IN13
    CALL PRINT_NUM
    MOV A, #42 ;'*'
    CALL UART_WRITE

    MOV A, #0x00
    MOV @R0, A
    DEC R0

    MOV A, #0x8F
    MOV @R0, A
    DEC R0

    MOV A, #0x05
    MOV @R0, A
    DEC R0

    MOV A, #0x02
    MOV @R0, A

    MOV R1, #M_IN03
    CALL PRINT_NUM

    MOV A, #61 ;'='
    CALL UART_WRITE

    CALL MUL_FIXED

    MOV R1, #M_RES3
    CALL PRINT_NUM
    CALL NEWL

    ; ~~~~~~~~~~~

    MOV R0, #M_IN13
    MOV A, #0xD4
    MOV @R0, A
    DEC R0

    MOV A, #0xEF
    MOV @R0, A
    DEC R0

    MOV A, #0x55
    MOV @R0, A
    DEC R0

    MOV A, #0xFB
    MOV @R0, A
    DEC R0

    MOV R1, #M_IN13
    CALL PRINT_NUM
    MOV A, #42 ;'*'
    CALL UART_WRITE

    MOV A, #0x00
    MOV @R0, A
    DEC R0
    MOV A, #0x8F
    MOV @R0, A
    DEC R0
    MOV A, #0x05
    MOV @R0, A
    DEC R0
    MOV A, #0x02
    MOV @R0, A

    MOV R1, #M_IN03
    CALL PRINT_NUM

    MOV A, #61 ;'='
    CALL UART_WRITE

    CALL MUL_FIXED

    MOV R1, #M_RES3
    CALL PRINT_NUM
    CALL NEWL
LOOP:
WAIT_FOR_BTN_DEPRESS:
    JT0 WAIT_FOR_BTN_DEPRESS
    CALL DELAY
WAIT_FOR_BTN:
    JNT0 WAIT_FOR_BTN
    CALL DELAY

    MOV R0, #M_IN13
    CLR F0

RNG_NUM_REPEAT:
    CALL XORSHIFT
    ANL A, #3
    JB6 RNG_NOT_NEG
    XRL A, #0xFF
    ADD A, #1
RNG_NOT_NEG:
    MOV @R0, A
    DEC R0
    CALL XORSHIFT
    MOV @R0, A
    DEC R0
    CALL XORSHIFT
    MOV @R0, A
    DEC R0
    CALL XORSHIFT
    MOV @R0, A

    CPL F0
    JF0 RNG_NUM_REPEAT

    MOV R1, #M_IN13
    CALL PRINT_NUM
    MOV A, #42 ;'*'
    CALL UART_WRITE
    MOV R1, #M_IN03
    CALL PRINT_NUM
    MOV A, #61 ;'='
    CALL UART_WRITE

    CALL MUL_FIXED

    MOV R1, #M_RES3
    CALL PRINT_NUM
    CALL NEWL

    JMP LOOP
