/*
 * Merge_Code.c
 *
 * Created: 22-03-2022 22:28:56
 * Author : PTK
 */

#define F_CPU 8000000UL
#define BAUD RATE 9600

#include<avr/io.h>

#include<stdio.h>

#include<util/delay.h>

#include<avr/interrupt.h>

#include "Header.h"



#define RS PC0
#define RW PC1
#define EN PC2

#define LOGO 0
#define BATTERY_CHECK 1
#define SELECT_MATERIAL 2
#define BALE_NO 3
#define START 4
#define LOAD_DATA 5
#define RESTART 6

#define COTTON 1
#define GRAINS 9
#define JUTE 7
#define WOOL 5
#define PAPER 6
#define RAYON 8
#define COTTON_SEED 2
#define VISCOSE 3
#define POLYSTER 4

#define COTTON_EN 0
#define GRAINS_EN 0
#define JUTE_EN 0
#define WOOL_EN 0
#define PAPER_EN 0
#define RAYON_EN 0
#define COTTON_SEED_EN 0
#define VISCOSE_EN 0
#define POLYSTER_EN 0

#define MAX 6
#define BALE_MAX 9



int Send_Avg = 0;
int Product_Flag = 0;

int Moisture_Val_int[11];
char Data2Send_Buff[150];
float Delet[11], Dlt, Dec_Dlt[11];

char Bale_No, Material_selection, Bale_Id;
char Material_Sel = 0;

unsigned int Counter, Sampling_Flag, Flag = 0;
float Flt_Val, Flt_Modified, Moisture_Conv_Value = 0.0, Avg_Flt, Usart_Avg;

int Average = 0, Avg_Digit_1, Avg_Digit_2, Avg_Digit_3, Avg_Digit_4, Avg_Digit_5, avg_out, dec_avg = 0, dec1 = 0, dec2 = 0, dec_avg1, dec_Avg_Digit_2;

int AinLow, Ain, adc_val, moisture_tens, moisture_hs, moisture_ones, pos1, pos2, temp, Counter_Hundrd, Counter_Tens, Counter_Ones, bale_number = 1, adc_val2 = -1;



char Press_Down() {
        char flag = 0;

        //while((PINB&(1<<1) )& 0x02)           // Pull Down Condtion
        while (~((PINB & (1 << 1))) & 0x02) // Pull Up Condition |(0b11111101)
        {
                flag = 1;
        }
        if (flag == 1)
                return 1;
        else
                return 0;
}
char Press_Up() {
        char flag = 0;

        //while((PINB&(1<<2) )& 0x04)			// Pull Down Condition
        while (~((PINB & (1 << 2))) & 0x04) // Pull Up Condition|(0b11111011)
        {
                flag = 1;
        }
        if (flag == 1)
                return 1;
        else
                return 0;
}
char Press_Enter() {
        char flag = 0;

        //while((PINB&(1<<3) )& 0x08)           // Pull Down Condition
        while (~((PINB & (1 << 3))) & 0x08) // Pull Up Condition |(0b11110111)
        {
                flag = 1;
        }
        if (flag == 1)
                return 1;
        else
                return 0;
}
char Press_Esc() {

        char flag = 0;
        //while((PINB&(1<<0) )& 0x01)           // Pull Down Condition
        while (~((PINB & (1 << 0))) & 0x01) // Pull Up Condition |(0b11111110)
        {
                flag = 1;
        }
        if (flag == 1)
                return 1;
        else
                return 0;
}
int main() {
        int Process = 0;
        DDRC = 0xFF;
     //   DDRA = 1 << 1 | 0 << 0 | 0 << 2 | 1 << 3;
        DDRB = 0 << 3 | 0 << 2 | 0 << 1 | 0 << 0;
        PORTB = 1 << 0 | 1 << 1 | 1 << 2 | 1 << 3;
     //   PORTA = 1 << 1;
        Usart_Init();
        Lcd_Initialization();
        Initial_Low_Battery_Test();

        while (1) {

                adc_val2 = ADC_read(2);
                switch (Process) {
                case LOGO:

                        Lcd_Cmd(0x80);
                        Lcd_String("ASHER INSTRUMENT.");
                        Lcd_Cmd(0xc0);
                        Lcd_String("  WELCOMES YOU  ");
                        _delay_ms(2000);
                        Process = BATTERY_CHECK;

                        break;
                case BATTERY_CHECK:
                        if (adc_val2 > 100) {
                               
                                _delay_ms(100);
                                Lcd_Cmd(0xc0);
                                Lcd_String("  LOW BATTERY!   ");
                                _delay_ms(150);
                                Lcd_Cmd(0xc0);
                                Lcd_String("                 ");
                                _delay_ms(150);
                        } else {
                              
                                {
                                        Process = SELECT_MATERIAL;
                                }

                        }
                        break;
                case SELECT_MATERIAL:

                        if (Press_Up()) {
                                Material_Sel = Material_Sel + 1;
                                if (Material_Sel > MAX) {
                                        Material_Sel = 1;
                                }
                        }
                        if (Press_Down()) {
                                Material_Sel = Material_Sel - 1;
                                if (Material_Sel < 1) {
                                        Material_Sel = MAX;
                                }
                        }

                        Lcd_Cmd(0x80);
                        Lcd_String("ASHER DMM22 RDY ");
                        Average = 0;
                        dec_avg = 0;
                        String_Arr_Clear();
                        for (int flush = 0; flush < 11; flush++) {
                                Moisture_Val_int[flush] = 0;
                        }

                        Product_Flag = 0;
                        Lcd_Cmd(0xc0);
                        switch (Material_Sel) {
                        case COTTON: {
                                Lcd_String("  COTTON        ");
                        }
                        break;
                        case GRAINS: {
                                Lcd_String("  GRAINS        ");
                        }
                        break;
                        case JUTE: {
                                Lcd_String(" JUTE          ");
                        }
                        break;
                        case WOOL: {
                                Lcd_String(" WOOL           ");
                        }
                        break;
                        case PAPER: {
                                Lcd_String(" PAPER          ");
                        }
                        break;
                        case RAYON: {
                                Lcd_String(" RAYON         ");
                        }
                        break;
                        case COTTON_SEED: {
                                Lcd_String(" CTN SEED       ");
                        }
                        break;
                        case VISCOSE: {
                                Lcd_String(" VISCOSE        ");
                        }
                        break;
                        case POLYSTER: {
                                Lcd_String(" POLYSTER        ");
                        }
                        break;

                        default: {
                                Lcd_String(" COTTON        ");
                                Material_Sel = 1;
                        }
                        break;
                        }

                        if (Press_Enter()) {
                                Process = BALE_NO;
                        }

                        break;
                case BALE_NO:
                        if (Press_Up()) {
                                bale_number = bale_number + 1;
                                if (bale_number > BALE_MAX) {
                                        bale_number = 1;
                                };
                        }
                        if (Press_Down()) {
                                bale_number = bale_number - 1;
                                if (bale_number < 1) {
                                        bale_number = 9;
                                };
                        }
                        Material_selection = Material_Sel * 100;
                        Bale_Id = Material_selection + bale_number;
                        if (Material_Sel == 1) {
                                Lcd_Cmd(0XCC);
                                Lcd_Data(1 + 0x30);
                                Lcd_Data(0 + 0x30);
                                Lcd_Data(bale_number + 0x30);
                        }
                        if (Material_Sel == 2) {
                                Lcd_Cmd(0xcc);
                                Lcd_Data(2 + 0x30);
                                Lcd_Data(0 + 0x30);
                                Lcd_Data(bale_number + 0x30);
                        }
                        if (Press_Esc()) {
                                Process = RESTART;
                                Moisture_Conv_Value = 0;
                                Counter = 0;
                                bale_number = 1;
                         

                        }

                        if (Press_Enter()) {

                                Process = START;
                        }

                        break;

                case START:
      
                        Data_To_NODEMCU();
                        for (int flush = 0; flush < 11; flush++) 
						{
                                Moisture_Val_int[flush] = 0;
                        }
                        Lcd_Cmd(0x80);
                        Lcd_String("ASHER DMM22 STRT");

                        Process = LOAD_DATA;

                        break;
                case LOAD_DATA:

                        if (~((PINB & (1 << 2))) & 0x04) //Press_Up Button
                        {

                                Average_Calculation();
                                Usart_Average_Data();

                                Lcd_Cmd(0x80);
                                Lcd_String("ASHER DMM22  AVG");
                                Avg_Flt = Usart_Avg * 100.0;
                                avg_out = (int) Avg_Flt;
                              
                                Avg_Digit_1 = ((avg_out) / 10000);
                                Avg_Digit_2 = (((avg_out) % 10000) / 1000);
                                Avg_Digit_3 = ((((avg_out) % 10000) % 1000) / 100);
                                Avg_Digit_4 = (((((avg_out) % 10000) % 1000) % 100) / 10);
                                Avg_Digit_5 = (((((avg_out) % 10000) % 1000) % 100) % 10);

                                Send_Avg = 1;
                                Data_To_NODEMCU();
                               
                                Lcd_Cmd(0xcA);
                                Lcd_Data(Avg_Digit_1 + 0x30);
                                Lcd_Data(Avg_Digit_2 + 0x30);
                                Lcd_Data(Avg_Digit_3 + 0x30);
                                Lcd_Data('.');
                                Lcd_Data(Avg_Digit_4 + 0x30);
                                Lcd_Data('%');
                               
                                while ((PINB & (1 << 0)) & 0x01); //Press_Esc BUTTON
                        }
                        if (~((PINB & (1 << 1))) & 0x02) //Press_Down Button to delet the last value
                        {

                                Dec_Dlt[Counter] = 0;
                                Delet[Counter] = 0;
                                Moisture_Val_int[Counter] = 0;
                                Counter = (Counter - 1);
                                Dlt = Delet[Counter];
                                Data_To_NODEMCU();
                                Display_Delet_Val_LCD(Dlt);
                              
                                Counter_Hundrd = Counter / 100;
                                Counter_Tens = (Counter % 100) / 10;
                                Counter_Ones = (Counter % 100) % 10;
                                Lcd_Cmd(0x8d);
                                Lcd_Data(Counter_Hundrd + 0x30);
                                Lcd_Data(Counter_Tens + 0x30);
                                Lcd_Data(Counter_Ones + 0x30);
                                Moisture_Conv_Value = 0;

                                while (~((PINB & (1 << 1))) & 0x02);
                        }

                        if (Press_Enter()) {
                                if (Counter <= 9) {
                                        Lcd_Cmd(0x80);
                                        Lcd_String("ASHER DMM22 #  ");
                                        Counter++;

                                        {

                                                Counter_Hundrd = Counter / 100;
                                                Counter_Tens = (Counter % 100) / 10;
                                                Counter_Ones = (Counter % 100) % 10;
                                                Lcd_Cmd(0x8d);
                                                Lcd_Data(Counter_Hundrd + 0x30);
                                                Lcd_Data(Counter_Tens + 0x30);
                                                Lcd_Data(Counter_Ones + 0x30);
                                                Moisture_Conv_Value = 0;
                                                

                                                Lcd_Cmd(0xc0);
                                                switch (Material_Sel) {
                                                case COTTON: {
                                                        Lcd_String(" COTTON   ");
                                                }
                                                break;
                                                case GRAINS: {
                                                        Lcd_String(" GRAINS   ");
                                                }
                                                break;
                                                case JUTE: {
                                                        Lcd_String("  PAPER   ");
                                                } //is mention in juite
                                                break;
                                                case WOOL: {
                                                        Lcd_String(" WOOL  ");
                                                }
                                                break;
                                                case PAPER: {
                                                        Lcd_String(" PAPER  ");
                                                }
                                                break;
                                                case RAYON: {
                                                        Lcd_String(" RAYON  ");
                                                }
                                                break;
                                                case COTTON_SEED: {
                                                        Lcd_String(" CTN SEED");
                                                }
                                                break;
                                                case VISCOSE: {
                                                        Lcd_String(" VISCOSE ");
                                                }
                                                break;
                                                case POLYSTER: {
                                                        Lcd_String(" POLYSTER ");
                                                }
                                                break;
                                                default: {
                                                        Lcd_String(" COTTON  ");
                                                }
                                                break;
                                                }

                                                Lcd_Cmd(0xcA);
                                                Lcd_String("CHKING");
                  //                              PORTA = 1 << 3 | 1 << 1;
                                                _delay_ms(1500);
                                                adc_val = ADC_read(0);
                                                for (Sampling_Flag = 0; Sampling_Flag < 25; Sampling_Flag++) {
                                                        adc_val = (adc_val + ADC_read(0)) / 2;
                                                }

                                                switch (Material_Sel) {
                                                case COTTON:
                                                        #if COTTON_EN
                                                        Moisture_Conv_Value = Scaling_Cotton(adc_val);
                                                        #endif
                                                        break;
                                                case GRAINS:
                                                        #if GRAINS_EN
                                                        Moisture_Conv_Value = scaling_Grain(adc_val);
                                                        #endif
                                                        break;
                                                case JUTE:
                                                        #if JUTE_EN
                                                        Moisture_Conv_Value = scaling_Jute(adc_val);
                                                        #endif
                                                        break;
                                                case WOOL:
                                                        #if WOOL_EN
                                                        Moisture_Conv_Value = scaling_Wool(adc_val);
                                                        #endif
                                                        break;
                                                case PAPER:
                                                        #if PAPER_EN
                                                        Moisture_Conv_Value = scaling_Paper(adc_val);
                                                        #endif
                                                        break;
                                                case RAYON:

                                                        #if RAYON_EN
                                                        Moisture_Conv_Value = scaling_Rayon(adc_val);
                                                        #endif

                                                        break;
                                                case COTTON_SEED:

                                                        #if COTTON_SEED_EN
                                                        Moisture_Conv_Value = Scaling_Cotton_Seed(adc_val);
                                                        #endif

                                                        break;
                                                case VISCOSE:

                                                        #if VISCOSE_EN
                                                        Moisture_Conv_Value = scaling_Viscose(adc_val);
                                                        #endif

                                                        break;
                                                case POLYSTER:

                                                        #if POLYSTER_EN
                                                        Moisture_Conv_Value = scaling_Polyster(adc_val);
                                                        #endif

                                                        break;

                                                default:
                                                        Moisture_Conv_Value = Scaling_Cotton(adc_val);
                                                        break;
                                                }
                                                //PORTA = 0 << 3 | 1 << 1;
                                                Display_Moist_Val_LCD(Moisture_Conv_Value);
                                                Data_To_NODEMCU();
                                                break;

                                        }
                                }
                        }

                        if (Press_Esc()) {
                                Process = RESTART;
                                Moisture_Conv_Value = 0;
                                Counter = 0;
                                bale_number = 1;
                          

                        }

                        break;
                case RESTART:
                        Process = SELECT_MATERIAL;
                        break;
                }
                if (adc_val2 > 100) {
                        Process = BATTERY_CHECK;
                }
        }
        return 0;
}

void Average_Calculation() {
        Average = 0;
        dec_avg = 0;
        for (int z = 1; z <= Counter; z++) {
                Average += Delet[z];
                dec_avg += Dec_Dlt[z];
        }

}


void Usart_Average_Data() {
        Usart_Avg = 0.0;

        for (int z = 1; z <= Counter; z++) {
                Usart_Avg += Delet[z];

        }
        Usart_Avg = (Usart_Avg / Counter);
     

}


void Lcd_String(const char * ptr) {
        while ( * ptr) {
                Lcd_Data( * ptr++);
        }
}

unsigned int ADC_read(int chl) {
        int slt_chl = 0;
        slt_chl = chl & 0x0f;
        ADMUX = slt_chl << 0 | 0 << 7 | 1 << 6 | 0 << 5;
        ADCSRA = 1 << 7 | 0 << 5 | 1 << 2 | 1 << 1 | 1 << 0;
        _delay_ms(10);
        ADCSRA |= (1 << 6);
        while (!(ADCSRA & (1 << 4)));
        ADCSRA = 0 << 4;
        AinLow = (int) ADCL;
        _delay_ms(10);
        Ain = (int) ADCH * 256;

        _delay_ms(10);
        Ain = Ain + AinLow;
        return (Ain);
}
void Display_Delet_Val_LCD(float val) {

        Flt_Val = val;
       
        Delet[Counter] = val;
        moisture_hs = (int) Flt_Val / 100;
        moisture_tens = (int) Flt_Val % 100 / 10;
        moisture_ones = (int) Flt_Val % 10;

        Flt_Modified = Flt_Val * 100;
        temp = (int) Flt_Modified;

       
        Dec_Dlt[Counter] = temp;

        pos1 = ((temp % 1000) % 100) / 10;
        pos2 = ((temp % 1000) % 100) % 10;

        if (adc_val2 < 100) // && warning_flag==0)
        {
                Lcd_Cmd(0xcA);
                Lcd_Data(moisture_hs + 0x30);
                Lcd_Data(moisture_tens + 0x30);
                Lcd_Data(moisture_ones + 0x30);
                Lcd_Data('.');
                Lcd_Data(pos1 + 0x30);
                Lcd_Data(pos2 + 0x30);
               

        }
}

void Display_Moist_Val_LCD(float val) {

        if (val == 0.00) {
                Flt_Val = 0.01;
        } else {
                Flt_Val = val;
        }
      
        Delet[Counter] = Flt_Val;
        moisture_hs = (int) Flt_Val / 100;
        moisture_tens = (int) Flt_Val % 100 / 10;
        moisture_ones = (int) Flt_Val % 10;

        Flt_Modified = Flt_Val * 100.0;
        temp = (int) Flt_Modified;

        Moisture_Val_int[Counter] = temp;

       
        Dec_Dlt[Counter] = temp;

        pos1 = ((temp % 1000) % 100) / 10;
        pos2 = ((temp % 1000) % 100) % 10;

        if (adc_val2 < 100) // && warning_flag==0)
        {
                Lcd_Cmd(0xcA);
                Lcd_Data(moisture_hs + 0x30);
                Lcd_Data(moisture_tens + 0x30);
                Lcd_Data(moisture_ones + 0x30);
                Lcd_Data('.');
                Lcd_Data(pos1 + 0x30);
                Lcd_Data(pos2 + 0x30);
                
        } else if (adc_val2 >= 100) //||warning_flag==1||check_flag>=2)
        {

                Lcd_String("  LOW BATTERY!   ");
                while (1) {
                        Lcd_Cmd(0xc0);
                        Lcd_String("  LOW BATTERY!   ");
                        _delay_ms(150);
                        Lcd_Cmd(0xc0);
                        Lcd_String("                 ");
                        _delay_ms(150);
                }

        }
}
void Data_To_NODEMCU() {

        int temp_str = 0;
        String_Arr_Clear();
        Data2Send_Buff[0] = 'b';
        Data2Send_Buff[1] = 'a';
        Data2Send_Buff[2] = 'l';
        Data2Send_Buff[3] = 'e';
        Data2Send_Buff[4] = '=';
        Data2Send_Buff[5] = (Bale_Id / 100) + 48;
        Data2Send_Buff[6] = (Bale_Id % 100 / 10) + 48;
        Data2Send_Buff[7] = (Bale_Id % 100 % 10) + 48;
        temp_str = 8;
        for (int i = 0; i < 10; i++) {
                if ((Moisture_Val_int[i + 1]) != 0)

                {
                        Data2Send_Buff[temp_str++] = '&';
                        Data2Send_Buff[temp_str++] = 's';
                        Data2Send_Buff[temp_str++] = '_';
                        Data2Send_Buff[temp_str++] = ((i + 1) / 10) + 48;
                        Data2Send_Buff[temp_str++] = ((i + 1) % 10) + 48;
                        Data2Send_Buff[temp_str++] = '=';
                        Data2Send_Buff[temp_str++] = ((Moisture_Val_int[i + 1]) / 10000) + 48;
                        Data2Send_Buff[temp_str++] = (((Moisture_Val_int[i + 1]) % 10000) / 1000) + 48;
                        Data2Send_Buff[temp_str++] = ((((Moisture_Val_int[i + 1]) % 10000) % 1000) / 100) + 48;
                        Data2Send_Buff[temp_str++] = '.';
                        Data2Send_Buff[temp_str++] = (((((Moisture_Val_int[i + 1]) % 10000) % 1000) % 100) / 10) + 48;
                        Data2Send_Buff[temp_str++] = (((((Moisture_Val_int[i + 1]) % 10000) % 1000) % 100) % 10) + 48;
                }

        }
        if (Send_Avg == 1) {
        
                Data2Send_Buff[temp_str++] = '&';
                Data2Send_Buff[temp_str++] = 'A';
                Data2Send_Buff[temp_str++] = 'V';
                Data2Send_Buff[temp_str++] = 'G';
                Data2Send_Buff[temp_str++] = '=';
                Data2Send_Buff[temp_str++] = (Avg_Digit_1) + 48;
                Data2Send_Buff[temp_str++] = (Avg_Digit_2) + 48;
                Data2Send_Buff[temp_str++] = (Avg_Digit_3) + 48;
                Data2Send_Buff[temp_str++] = '.';
                Data2Send_Buff[temp_str++] = (Avg_Digit_4) + 48;
                Data2Send_Buff[temp_str++] = (Avg_Digit_5) + 48;

                Send_Avg = 0;
        }
        Data2Send_Buff[temp_str] = '\0';

        Usart_Msg(Data2Send_Buff);

}
void String_Arr_Clear() {
	
        for (int flush = 0 ; flush < 150 ; flush++) 
		{

                Data2Send_Buff[flush] = 0;
        }

}
void Initial_Low_Battery_Test() {
        //PORTA = 0 << 3 | 1 << 1;
       // PORTA = 1 << 3 | 1 << 1;
        _delay_ms(1500);

        adc_val2 = ADC_read(2);
        _delay_ms(50);
        //PORTA = 0 << 3 | 1 << 1;
        _delay_ms(500);
}
void low_battery_test() {

        adc_val2 = ADC_read(2);
        _delay_ms(200);

}

