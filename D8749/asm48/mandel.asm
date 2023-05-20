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

;.equ DEBUG0 124
;.equ DEBUG1 125
;.equ DEBUG2 126
;.equ DEBUG3 127

START:
    DIS I
    DIS TCNTI
    SEL RB0
    STRT T
    CALL UART_INIT
    JMP PGM_BEGIN

    ;Multiplies two 32-bit integers, producing a 56-bit result that is then right-shifted to 32-bits
    ;Uses dedicated memory locations for arguments and result
MUL_FIXED:
    SEL RB1
    CLR F1
    CPL F1

    MOV R0, #M_IN03
    MOV A, @R0
    ANL A, #0x80
    JZ NOT_NEG_1
    CPL F1
NOT_NEG_1:
    MOV R0, #M_IN13
    MOV A, @R0
    ANL A, #0x80
    JZ NOT_NEG_2

    CLR C
    CPL C
    MOV R6, #0
    CPL F1
    MOV R5, #4
    MOV R0, #M_IN10
NEG_LOOP_2:
    MOV A, #0xFF
    XRL A, @R0
    ADDC A, R6
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

    MOV R0, #M_IN03
    MOV A, @R0
    ANL A, #128
    MOV R0, #M_IN00
    JNZ IN1_IS_NEG
    
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
    JMP IN1_IS_NOT_NEG
IN1_IS_NEG:
    MOV A, @R0
    CPL A
    ADD A, #1
    MOV R1, A
    INC R0
    
    MOV A, @R0
    CPL A
    ADDC A, #0
    MOV R2, A
    INC R0
    
    MOV A, @R0
    CPL A
    ADDC A, #0
    MOV R3, A
    INC R0
    
    MOV A, @R0
    CPL A
    ADDC A, #0
    MOV R4, A
    INC R0
IN1_IS_NOT_NEG:

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
    SEL RB0
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
    
;PRINT_HEX:
;    SEL RB1
;    MOV R1, A
;    CLR F0
;    SWAP A
;PRINT_HEX_DIGIT:
;    ANL A, #15
;    MOV R2, A
;    ADD A, #0b11110110
;    JC ABOVE_10_A
;    MOV A, R2
;    ADD A, #48
;    JMP NOT_ABOVE_10_A
;ABOVE_10_A:
;    ADD A, #65
;NOT_ABOVE_10_A:
;    CALL UART_WRITE
    
;    JF0 PRINT_HEX_END
;    CPL F0
;    MOV A, R1
;    JMP PRINT_HEX_DIGIT
    
;PRINT_HEX_END:
;    SEL RB0
;    RETR
    
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
;PRINT_NUM:
;    MOV A, R1
;    MOV R1, A
;    MOV A, @R1
;    JB7 PRINT_NEG_NUM
;PRINT_POS_NUM:
;    MOV A, @R1
;    DEC R1
;    CALL PRINT_HEX
;    MOV A, #46 ;'.'
;    CALL UART_WRITE
;    MOV A, @R1
;    DEC R1
;    CALL PRINT_HEX
;    MOV A, @R1
;    DEC R1
;    CALL PRINT_HEX
;    MOV A, @R1
;    CALL PRINT_HEX

;    RETR
;PRINT_NEG_NUM:
;    DEC R1
;    DEC R1
;    DEC R1
;    MOV A, #45 ;'-'
;    CALL UART_WRITE

;    MOV R0, #DEBUG0
;    MOV A, #0xFF
;    XRL A, @R1
;    ADD A, #1
;    MOV @R0, A
;    INC R0
;    INC R1
;    MOV A, #0xFF
;    XRL A, @R1
;    ADDC A, #0
;    MOV @R0, A
;    INC R0
;    INC R1
;    MOV A, #0xFF
;    XRL A, @R1
;    ADDC A, #0
;    MOV @R0, A
;    INC R0
;    INC R1
;    MOV A, #0xFF
;    XRL A, @R1
;    ADDC A, #0
;    MOV @R0, A

;    MOV A, @R0
;    DEC R0
;    CALL PRINT_HEX
;    MOV A, #46 ;'.'
;    CALL UART_WRITE
;    MOV A, @R0
;    DEC R0
;    CALL PRINT_HEX
;    MOV A, @R0
;    DEC R0
;    CALL PRINT_HEX
;    MOV A, @R0
;    DEC R0
;    CALL PRINT_HEX
    
;    RETR

    ; RB1 is used for temp stuff during subroutines
    ; Memory locations:
.equ C1_0, 50
.equ C1_1, 51
.equ C1_2, 52
.equ C1_3, 53
.equ C2_0, 54
.equ C2_1, 55
.equ C2_2, 56
.equ C2_3, 57
.equ C3_0, 58
.equ C3_1, 59
.equ C3_2, 60
.equ C3_3, 61
.equ C4_0, 62
.equ C4_1, 63
.equ C4_2, 64
.equ C4_3, 65
.equ CURR_ROW, 66
.equ CURR_COL, 67
.equ C_IM0, 68
.equ C_IM1, 69
.equ C_IM2, 70
.equ C_IM3, 71
.equ C_RE0, 72
.equ C_RE1, 73
.equ C_RE2, 74
.equ C_RE3, 75
.equ MAN_X0, 76
.equ MAN_X1, 77
.equ MAN_X2, 78
.equ MAN_X3, 79
.equ MAN_XX0, 80
.equ MAN_XX1, 81
.equ MAN_XX2, 82
.equ MAN_XX3, 83
.equ MAN_YY0, 84
.equ MAN_YY1, 85
.equ MAN_YY2, 86
.equ MAN_YY3, 87
.equ ITERATION0, 88
.equ ITERATION1, 89

    ; Program constants
.equ M_WIDTH, 230
.equ M_HEIGHT, 50
.equ C1_PRE, 1101
.equ C4_PRE, 2730
.equ W_D2, 115
.equ H_D2, 25

    ; Program settings
.equ ZOOM, 16210690
.equ RE, 0
.equ IMAG, 0
.equ MAX_ITERS, 256

WORD_COPY:
    MOV R2, #4
WORD_COPY_LOOP:
    MOV A, @R0
    MOV @R1, A
    INC R0
    INC R1
    DJNZ R2, WORD_COPY_LOOP
    RET

PGM_BEGIN:
	MOV A, #255
	OUTL P1, A

    ; c1 = C1_PRE * ZOOM
    ; c2 = W_D2 * c1
    MOV R0, #M_IN00
    MOV @R0, #0
    INC R0
    MOV @R0, #C1_PRE&0xFF
    INC R0
    MOV @R0, #C1_PRE>>8
    INC R0
    MOV @R0, #0
    INC R0 ; R0 = M_IN10
    MOV @R0, #ZOOM&0xFF
    INC R0
    MOV @R0, #ZOOM>>8&0xFF
    INC R0
    MOV @R0, #ZOOM>>16&0xFF
    INC R0
    MOV @R0, #ZOOM>>24&0xFF
    CALL MUL_FIXED
    MOV R0, #M_RES0
    MOV R1, #M_IN00
    SEL RB1
    MOV R0, #C1_0
    SEL RB0
    MOV R2, #4
COPY_LOOP0:
    MOV A, @R0
    INC R0
    MOV @R1, A
    INC R1
    SEL RB1
    MOV @R0, A
    INC R0
    SEL RB0
    DJNZ R2, COPY_LOOP0
    CLR A
    MOV @R1, A
    INC R1
    MOV @R1, A
    INC R1
    MOV @R1, A
    INC R1
    MOV @R1, #W_D2
    CALL MUL_FIXED
    MOV R0, #M_RES0
    MOV R1, #C2_0
    CALL WORD_COPY

    ; c4 = C4_PRE * ZOOM
    ; c3 = H_D2 * c4
    MOV R0, #M_IN00
    MOV @R0, #0
    INC R0
    MOV @R0, #C4_PRE&0xFF
    INC R0
    MOV @R0, #C4_PRE>>8
    INC R0
    MOV @R0, #0
    INC R0 ; R0 = M_IN10
    MOV @R0, #ZOOM&0xFF
    INC R0
    MOV @R0, #ZOOM>>8&0xFF
    INC R0
    MOV @R0, #ZOOM>>16&0xFF
    INC R0
    MOV @R0, #ZOOM>>24&0xFF
    CALL MUL_FIXED
    MOV R0, #M_RES0
    MOV R1, #M_IN00
    SEL RB1
    MOV R0, #C4_0
    SEL RB0
    MOV R2, #4
COPY_LOOP2:
    MOV A, @R0
    INC R0
    MOV @R1, A
    INC R1
    SEL RB1
    MOV @R0, A
    INC R0
    SEL RB0
    DJNZ R2, COPY_LOOP2
    CLR A
    MOV @R1, A
    INC R1
    MOV @R1, A
    INC R1
    MOV @R1, A
    INC R1
    MOV @R1, #H_D2
    CALL MUL_FIXED
    MOV R0, #M_RES0
    MOV R1, #C3_0
    CALL WORD_COPY

	MOV R1, #CURR_ROW
	MOV @R1, #M_HEIGHT-1
	;MOV @R1, #0x20
MANDEL_LOOP_ROWS:
	IN A, P1
	XRL A, #1
	OUTL P1, A
	
	; res = row * c4
	MOV R1, #M_IN00
	CLR A
	MOV @R1, A
	INC R1
	MOV @R1, A
	INC R1
	MOV @R1, A
	INC R1
	MOV R0, #CURR_ROW
	MOV A, @R0
	MOV @R1, A
	INC R1
	MOV R0, #C4_0
	CALL WORD_COPY
	CALL MUL_FIXED
	
	; c_im  = res + IMAG
	MOV R0, #M_RES0
	MOV R1, #C_IM0
	MOV A, @R0
	ADD A, #IMAG&0xFF
	MOV @R1, A
	INC R0
	INC R1
	MOV A, @R0
	ADDC A, #IMAG>>8&0xFF
	MOV @R1, A
	INC R0
	INC R1
	MOV A, @R0
	ADDC A, #IMAG>>16&0xFF
	MOV @R1, A
	INC R0
	INC R1
	MOV A, @R0
	ADDC A, #IMAG>>24&0xFF
	MOV @R1, A
	
	; c_im = c_im - c3
	MOV R0, #C_IM0
	MOV R1, #C3_0
	MOV R2, #4
	CLR C
	CPL C
SUB_LOOP0:
	MOV A, @R1
	XRL A, #0xFF
	ADDC A, @R0
	MOV @R0, A
	INC R1
	INC R0
	DJNZ R2, SUB_LOOP0
	
	MOV R1, #CURR_COL
	MOV @R1, #0
	;MOV @R1, #0x7C
MANDEL_LOOP_COLS:
	; res = col * C1/2
	MOV R1, #M_IN00
	CLR A
	MOV @R1, A
	INC R1
	MOV @R1, A
	INC R1
	INC R1
	MOV R0, #CURR_COL
	MOV A, @R0
	CLR C
	RRC A
	MOV @R1, A
	CLR A
	RRC A
	DEC R1
	MOV @R1, A
	INC R1
	INC R1
	MOV R0, #C1_0
	CALL WORD_COPY
	CALL MUL_FIXED
    MOV R0, #M_RES0
    MOV R1, #4
    CLR C
ADD_LOOP0:
    MOV A, @R0
	ADDC A, @R0
	MOV @R0, A
	INC R0
	DJNZ R1, ADD_LOOP0
	
	; regs = res + RE
	MOV R0, #M_RES0
	MOV A, @R0
	ADD A, #RE&0xFF
	MOV R4, A
	INC R0
	MOV A, @R0
	ADDC A, #RE>>8&0xFF
	MOV R5, A
	INC R0
	MOV A, @R0
	ADDC A, #RE>>16&0xFF
	MOV R6, A
	INC R0
	MOV A, @R0
	ADDC A, #RE>>24&0xFF
	MOV R7, A
	
	; c_re = x = regs - c2
	MOV R0, #C2_0
	MOV R1, #4
	SEL RB1
	MOV R0, #MAN_X0
	MOV R1, #C_RE0
	SEL RB0
	MOV R3, #4
	CLR C
	CPL C
SUB_LOOP1:
	MOV A, @R0
	INC R0
	XRL A, #0xFF
	ADDC A, @R1
	INC R1
	SEL RB1
	MOV @R0, A
	MOV @R1, A
	INC R0
	INC R1
	SEL RB0
	DJNZ R3, SUB_LOOP1
	
	; y = c_im
	MOV R0, #C_IM0
	MOV R1, #4
	CALL WORD_COPY
	MOV A, R4
	ORL A, R5
	ORL A, R6
	ORL A, R7
	JNZ Y_IS_FINE
	MOV R4, #1
Y_IS_FINE:
	
	;MOV A, #88
	;CALL UART_WRITE
	;CALL NEWL
	;MOV R1, #MAN_X3
	;CALL PRINT_NUM
	;CALL NEWL
	
	;MOV A, #89
	;CALL UART_WRITE
	;CALL NEWL
	;MOV R1, #7
	;CALL PRINT_NUM
	;CALL NEWL
	;CALL NEWL
	
	; iteration = 0
	MOV R0, #ITERATION0
	CLR A
	MOV @R0, A
	INC R0
	MOV @R0, A
MANDEL_CALC_LOOP:
	; yy = y * y
	MOV R0, #M_IN00
	MOV R1, #M_IN10
	MOV A, R4
	MOV @R0, A
	MOV @R1, A
	INC R0
	INC R1
	MOV A, R5
	MOV @R0, A
	MOV @R1, A
	INC R0
	INC R1
	MOV A, R6
	MOV @R0, A
	MOV @R1, A
	INC R0
	INC R1
	MOV A, R7
	MOV @R0, A
	MOV @R1, A
	CALL MUL_FIXED
	MOV R0, #M_RES0
	MOV R1, #MAN_YY0
	CALL WORD_COPY
	
	; res = x * y
	MOV R0, #MAN_X0
	MOV R1, #M_IN10
	CALL WORD_COPY
	CALL MUL_FIXED
	
	; res = res << 1
	MOV R0, #M_RES0
	MOV R1, #4
	CLR C
SHIFT_LOOP0:
	MOV A, @R0
	RLC A
	MOV @R0, A
	INC R0
	DJNZ R1, SHIFT_LOOP0
	
	; y = res + c_im
	MOV R0, #M_RES0
	MOV R1, #C_IM0
	MOV A, @R0
	ADD A, @R1
	MOV R4, A
	INC R0
	INC R1
	MOV A, @R0
	ADDC A, @R1
	MOV R5, A
	INC R0
	INC R1
	MOV A, @R0
	ADDC A, @R1
	MOV R6, A
	INC R0
	INC R1
	MOV A, @R0
	ADDC A, @R1
	MOV R7, A
	
	; res = xx = x * x
	MOV R0, #MAN_X0
	MOV R1, #M_IN00
	SEL RB1
	MOV R0, #M_IN10
	SEL RB0
	MOV R2, #4
COPY_LOOP10:
	MOV A, @R0
	INC R0
	MOV @R1, A
	INC R1
	SEL RB1
	MOV @R0, A
	INC R0
	SEL RB0
	DJNZ R2, COPY_LOOP10
	CALL MUL_FIXED
	MOV R0, #M_RES0
	MOV R1, #MAN_XX0
	CALL WORD_COPY

	; res = res - yy
	CLR C
	MOV R0, #MAN_YY0
	MOV R1, #M_RES0
	MOV R2, #4
	CPL C
	NOP
	NOP
	NOP
SUB_LOOP2:
	MOV A, @R0
	INC R0
	XRL A, #0xFF
	ADDC A, @R1
	MOV @R1, A
	INC R1
	DJNZ R2, SUB_LOOP2
	
	; x = res + c_re
	CLR C
	MOV R0, #C_RE0
	MOV R1, #M_RES0
	MOV R2, #4
	SEL RB1
	MOV R1, #MAN_X0
	SEL RB0
ADD_LOOP1:
	MOV A, @R1
	INC R1
	ADDC A, @R0
	INC R0
	SEL RB1
	MOV @R1, A
	INC R1
	SEL RB0
	DJNZ R2, ADD_LOOP1
	
	; check if xx + yy <= 4 (exit cond)
	MOV R0, #MAN_XX0
	MOV R1, #MAN_YY0
	MOV R2, #4
	MOV A, @R0
	ADD A, @R1
	INC R0
	INC R1
	MOV A, @R0
	ADDC A, @R1
	INC R0
	INC R1
	MOV A, @R0
	ADDC A, @R1
	INC R0
	INC R1
	MOV A, @R0
	ADDC A, @R1

	ADD A, #0b11111100
	JNC MANDEL_VAL_NOT_ESCAPED
	JMP MANDEL_VAL_ESCAPED
MANDEL_VAL_NOT_ESCAPED:

	; iteration++
	MOV R0, #ITERATION0
	MOV A, @R0
	ADD A, #1
	MOV @R0, A
	INC R0
	CLR A
	ADDC A, @R0
	MOV @R0, A
	
	; Max iters exit cond
	MOV R0, #ITERATION0
	MOV A, #MAX_ITERS&0xFF
	XRL A, @R0
	INC R0
	MOV R2, A
	MOV A, #MAX_ITERS>>8
	XRL A, @R0
	ORL A, R2
	JZ MANDEL_VAL_INSIDE
	
	JMP MANDEL_CALC_LOOP
MANDEL_VAL_ESCAPED:
	MOV R0, #ITERATION0
	MOV A, #27
	CALL UART_WRITE
	MOV A, #91
	CALL UART_WRITE
	MOV A, #51
	CALL UART_WRITE

	MOV A, @R0
	ANL A, #7
	JNZ DO_NOT_INC
	INC A
DO_NOT_INC:
	ADD A, #48
	CALL UART_WRITE
	MOV A, #109
	CALL UART_WRITE
	MOV A, #0
	CALL UART_WRITE
	MOV A, #35 ;'#'
	CALL UART_WRITE
	JMP MANDEL_CALC_LOOP_EXIT
MANDEL_VAL_INSIDE:
	MOV A, #32 ;' '
	CALL UART_WRITE
MANDEL_CALC_LOOP_EXIT:

	; Loop exit cond
	MOV R1, #CURR_COL
	INC @R1
	MOV A, @R1
	XRL A, #M_WIDTH
	JZ MANDEL_LOOP_COLS_EXIT
	JMP MANDEL_LOOP_COLS 
	
MANDEL_LOOP_COLS_EXIT:
	CALL NEWL
    ; Loop exit cond
	MOV R1, #CURR_ROW
	MOV A, @R1
	DEC A
	MOV @R1, A
	JZ MANDEL_LOOP_ROWS_EXIT
	JMP MANDEL_LOOP_ROWS
	
MANDEL_LOOP_ROWS_EXIT:
	CALL NEWL

WAIT_FOR_BTN_DEPRESS:
    JT0 WAIT_FOR_BTN_DEPRESS
    CALL DELAY
WAIT_FOR_BTN:
    JNT0 WAIT_FOR_BTN
    JMP PGM_BEGIN

; TODO: Remove debug stuffs
