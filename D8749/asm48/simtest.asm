	DIS I
	DIS TCNTI
	STRT T
	SEL RB0
	CALL UART_INIT
	NOP
	MOV A, #65
	CALL UART_WRITE
	CALL NEWL
.db 1 ;HALT

	;Connection of P8251 to microcontroller:
	;DB - DB7 = D0 - D7
	;P20 = RESET
	;P21 = CS (may be omitted, and CS pulled to GND on P8251, if only device on bus)
	;P22 = C/D
	;P23 = TxEMPTY
UART_INIT:
	MOV A, #0b11111000
.db 0xB7 ;DIR P2,A
	MOV A,#0b00001111
	OUTL P2,A
	;CALL DELAY
	NOP
	ANL P2,#254
	NOP
	;CALL DELAY
	ANL P2,#253
	MOV A,#0b01001110 ; Mode word: 1 stop bit, no parity, 8-bit, 16X baud rate divisor
	OUTL BUS,A
	MOV A,#0b00110011 ; Command word: Enable TX, but not RX, reset error flags
	OUTL BUS,A
	ORL P2,#2
	RET
	
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
