


extern void Lcd_Initialization();
extern void Lcd_Enable();
extern void Display_Moist_Val_LCD(float val);
extern void Display_Delet_Val_LCD(float val);
extern unsigned int ADC_read(int chnl);
extern void Initial_Low_Battery_Test();
extern void Average_Calculation();                        //--- Usart Initialize                           //--- Usart Receive
extern void Usart_Msg(char * c);                       //--- Usart Transmit String
extern void Usart_Average_Data();
extern void Data_To_NODEMCU();
extern void String_Arr_Clear();

#include"LCD_DISPLAY.c"
#include"UART.c"
#include"ADC_READING_VALUE.c"