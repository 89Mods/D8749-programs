START:
	DIS I
	DIS TCNTI
	STRT T
	MOV	R7,#0xAA
LOOP:
	MOV	A,R7
	OUTL	P2,A
	OUTL BUS,A
	XRL A,#0xFF
	MOV R7,A
	MOV A, T
	OUTL P1,A
	MOV R6, #18
AAA:
	CALL DELAY
	DJNZ R6, AAA
BTN_WAIT:
	JT0 BTN_WAIT
	JMP	LOOP

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
	NOP
	NOP
	NOP
	NOP
	NOP
	NOP
	NOP
	JNZ DELAY_LOOP
	RET
