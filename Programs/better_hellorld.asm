START:
    DIS I
    DIS TCNTI
    CALL UART_INIT
PRINT_RESTART:
    MOV R3,TEXT&0xFF
PRINT_LOOP:
    MOV A,R3
    MOVP A,@A
    JZ PRINT_RESTART
    INC R3
    CALL UART_WRITE
    JMP PRINT_LOOP
TEXT:
.db 72,101,108,108,111,114,108,100,33,13,10,0 ; "Hellorld!\r\n"

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
	;P21 = CS (may be omitted, and CS pulled the GND on P8251, if only device on bus)
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
