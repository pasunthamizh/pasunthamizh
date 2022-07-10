//#include<stdio.h>

#define RS PC0
#define RW PC1
#define EN PC2

void Lcd_Cmd(char cmd);
void Lcd_Data(char data);
void Lcd_String(const char * ptr);



void Lcd_Enable() {
	PORTC |= (1 << EN);
	_delay_ms(1);
	PORTC &= ~(1 << EN);
}

void Lcd_Initialization() {
	Lcd_Cmd(0x02);
	Lcd_Cmd(0x28);
	Lcd_Cmd(0x0C);
	Lcd_Cmd(0x06);
	Lcd_Cmd(0x83);
}

void Lcd_Cmd(char cmd) {
	char temp_cmd;

	temp_cmd = cmd & 0xF0;
	PORTC = temp_cmd;
	PORTC &= ~(1 << RS);
	PORTC &= ~(1 << RW);
	Lcd_Enable();

	temp_cmd = ((cmd << 4) & 0xF0);
	PORTC = temp_cmd;
	PORTC &= ~(1 << RS);
	PORTC &= ~(1 << RW);
	Lcd_Enable();
}

void Lcd_Data(char data) {
	char temp_data;

	temp_data = data & 0xF0;
	PORTC = temp_data;
	PORTC |= (1 << RS);
	PORTC &= ~(1 << RW);
	Lcd_Enable();

	temp_data = ((data << 4) & 0xF0);
	PORTC = temp_data;
	PORTC |= (1 << RS);
	PORTC &= ~(1 << RW);
	Lcd_Enable();
}