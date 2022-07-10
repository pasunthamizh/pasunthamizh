//#include<stdio.h>

void Usart_TX(char x);                          //--- Usart Transmit
char Usart_RX(void);
void Usart_Init(void);

void Usart_Init() {
	UBRRH = 0x00; //--- Initialize UBRR value for Baud Rate
	UBRRL = 0x33; //--- Baud Rate Set as 9600 by Data Sheet
	UCSRB = (1 << TXEN) | (1 << RXEN); //--- Transmit and Receive Enable
	UCSRC = (1 << URSEL) | (3 << UCSZ0); //--- 8 bit data and UCSRC is selected
}

void Usart_TX(char x) {
	while (!(UCSRA & (1 << UDRE)));
	UDR = x; //--- Move data to UDR Data Reg
	while (!(UCSRA & (1 << UDRE))); //--- Check whether UDR is empty
}

char Usart_RX() {
	while (!(UCSRA & (1 << RXC))); //--- Check whether Receive is complete
	return (UDR); //--- Return Data from UDR
}

void Usart_Msg(char * c) {
	while ( * c != 0) //--- Check for null
	Usart_TX( * c++); //--- Increment the pointer
}

