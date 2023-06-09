START:
	DIS I
	DIS TCNTI
	STRT T
	MOV R7, #0
	JMP PGM_START
TRUPT:
	MOV R4, A
	INC R6

	MOV A, R5
	JF1 FAST_CHECK
SLOW_CHECK:
	MOV A, R6
	JB6 DO_THE_THING
	MOV A, R4
	RETR
FAST_CHECK:
	MOV A, R6
	JB5 DO_THE_THING
	MOV A, R4
	RETR
DO_THE_THING:
	MOV R6, #0
	MOV A, R7
	INC A
	ANL A, #0x0F
	MOV R7, A
	CALL SET_DIGIT
	MOV A, R4
	RETR
PGM_START:
	CLR F1
	CPL F1
	MOV R6, #0
	MOV R3, #0
	CALL SET_DIGIT
	EN TCNTI
LOOP:
	NOP
	JNT0 BTN_RELEASED
	MOV A, R3
	JNZ LOOP
	DIS TCNTI
	MOV R3, #64
	CPL F1
	CALL SET_DIGIT
	MOV R1, #255
	EN TCNTI
DELAY:
	NOP
	NOP
	DJNZ R1, DELAY
	JMP LOOP
BTN_RELEASED:
	MOV R3, #0
	JMP LOOP

SET_DIGIT:
	MOV A, R7
	ADD A, #DIGITS
	MOVP A, @A
	XRL A, #0xFF
	JF1 NO_DP
	ANL A, #0b01111111
NO_DP:
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

;0 - A
;1 - F
;2 - E
;3 - B
;4 - G
;5 - C
;6 - D
;7 - DP
