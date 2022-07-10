//#include<stdio.h>

float Scaling_Cotton(int value);
float scaling_Grain(int value);
float scaling_Jute(int value);
float scaling_Wool(int value);
float scaling_Paper(int value);
float scaling_Rayon(int value);
float Scaling_Cotton_Seed(int value);
float scaling_Viscose(int value);
float scaling_Polyster(int value);


float Scaling_Cotton(int value) {
        float result = 0.0;

        if (value >= 0 && value < 60) //0 to 3.5
        {
                result = ((((float) value - 0.0) * (3.5 - 0.0)) / (59 - 0)) + 0;
        } else if (value > 59 && value < 115) //3.6 to 4.0
        {
                result = ((((float) value - 60) * (4.0 - 3.6)) / (114 - 60)) + 3.6;
        } else if (value > 114 && value < 233) //4.1 - 5.0
        {
                result = ((((float) value - 115) * (5.0 - 4.1)) / (232 - 115)) + 4.1;
        } else if (value > 232 && value < 326) // 5.1 - 6.0
        {
                result = ((((float) value - 233) * (6.0 - 5.1)) / (325 - 233)) + 5.1;
        } else if (value > 325 && value < 398) //6.1 - 7.0
        {
                result = ((((float) value - 326) * (7.0 - 6.1)) / (397 - 326)) + 6.1;
        } else if (value > 397 && value < 460) //7.1 - 8.0
        {
                result = ((((float) value - 398) * (8.0 - 7.1)) / (459 - 398)) + 7.1;
        } else if (value > 459 && value < 505) //8.1 - 9.0
        {
                result = ((((float) value - 460) * (9.0 - 8.1)) / (504 - 460)) + 8.1;
        } else if (value > 504 && value <= 555) //9.1 - 10.0
        {
                result = ((((float) value - 505) * (10.0 - 9.1)) / (555 - 505)) + 9.1;
        } else if (value > 555 && value <= 596) //10.1 - 11.0
        {
                result = ((((float) value - 556) * (11.0 - 10.1)) / (596 - 556)) + 10.1;
        } else if (value > 596 && value <= 632) //11.1 - 12.0
        {
                result = ((((float) value - 597) * (12.0 - 11.1)) / (632 - 597)) + 11.1;
        } else if (value > 632 && value <= 663) //12.1 - 13.0
        {
                result = ((((float) value - 633) * (13.0 - 12.1)) / (663 - 633)) + 12.1;
        } else if (value > 663 && value <= 767) //13.1 - 14.0
        {
                result = ((((float) value - 664) * (14.0 - 13.1)) / (767 - 664)) + 13.1;
        } else if (value > 767 && value <= 844) //14.1 - 15.0
        {
                result = ((((float) value - 768) * (15.0 - 14.1)) / (844 - 768)) + 14.1;
        } else if (value > 844 && value <= 892) //15.1 - 16.0
        {
                result = ((((float) value - 845) * (16.0 - 15.1)) / (892 - 845)) + 15.1;
        } else if (value > 892 && value <= 926) //16.1 - 17.0
        {
                result = ((((float) value - 893) * (17.0 - 16.1)) / (926 - 893)) + 16.1;
        } else if (value > 926 && value <= 944) //17.1 - 18.0
        {
                result = ((((float) value - 927) * (18.0 - 17.1)) / (944 - 927)) + 17.1;
        } else if (value > 944 && value <= 958) //18.1 - 19.0
        {
                result = ((((float) value - 945) * (19.0 - 18.1)) / (958 - 945)) + 18.1;
        } else if (value > 958 && value <= 968) //19.1 - 20.0
        {
                result = ((((float) value - 959) * (20.0 - 19.1)) / (968 - 959)) + 19.1;
        } else if (value > 968 && value <= 974) //20.1 - 21.0
        {
                result = ((((float) value - 969) * (21.0 - 20.1)) / (974 - 969)) + 20.1;
        } else if (value > 974 && value <= 980) //21.1 - 22.0
        {
                result = ((((float) value - 975) * (22.0 - 21.1)) / (980 - 975)) + 21.1;
        } else if (value > 980 && value <= 986) //22.1 - 23.0
        {
                result = ((((float) value - 981) * (23.0 - 22.1)) / (986 - 981)) + 22.1;
        } else if (value > 986 && value <= 991) //23.1 - 24.0
        {
                result = ((((float) value - 987) * (24.0 - 23.1)) / (991 - 987)) + 23.1;
        } else if (value > 991 && value <= 996) //24.1 - 25.0
        {
                result = ((((float) value - 992) * (25.0 - 24.1)) / (996 - 992)) + 24.1;
        } else if (value > 996 && value <= 1001) //25.1 - 26.0
        {
                result = ((((float) value - 997) * (26.0 - 25.1)) / (1001 - 997)) + 25.1;
        } else if (value > 1001 && value <= 1004) //26.1 - 27.0
        {
                result = ((((float) value - 1002) * (27.0 - 26.1)) / (1004 - 1002)) + 26.1;
        } else if (value > 1004 && value <= 1007) //27.1 - 28 .0
        {
                result = ((((float) value - 1005) * (28.0 - 27.1)) / (1007 - 1005)) + 27.1;
        } else if (value > 1007 && value <= 1010) //28.1 - 29 .0
        {
                result = ((((float) value - 1008) * (29.0 - 28.1)) / (1010 - 1008)) + 28.1;
        } else if (value > 1010 && value <= 1013) //29.1 - 30 .0
        {
                result = ((((float) value - 1011) * (30.0 - 29.1)) / (1013 - 1011)) + 29.1;
        } else if (value == 1014) {
                result = 31.0;
        } else if (value == 1015) {
                result = 32.0;
        } else if (value == 1016) {
                result = 33.0;
        } else if (value == 1017) {
                result = 34.0;
        } else if (value == 1018) {
                result = 35.0;
        } else if (value == 1019) {
                result = 36.0;
        } else if (value == 1020) {
                result = 37.0;
        } else if (value == 1021) {
                result = 38.0;
        } else if (value == 1022) {
                result = 39.0;
        } else if (value > 1022) {
                result = 40.0;
        }
        return result;
}
float scaling_Grain(int value) {
        float result = 0.0;

        if (value >= 0 && value < 60) //0 to 2.5  ---1
        {
                result = ((((float) value - 0.0) * (2.5 - 0.0)) / (59 - 0)) + 0;
        } else if (value > 59 && value < 115) //2.6 to 3.2  ---2
        {
                result = ((((float) value - 60) * (3.2 - 2.6)) / (114 - 60)) + 2.6;
        } else if (value > 114 && value < 233) //3.3 - 4.0   ---3
        {
                result = ((((float) value - 115) * (4.0 - 3.3)) / (232 - 115)) + 3.3;
        } else if (value > 232 && value < 326) //4.1 - 4.9  --- 4
        {
                result = ((((float) value - 233) * (4.9 - 4.1)) / (325 - 233)) + 4.1;
        } else if (value > 325 && value < 398) //5.0 - 5.8   --- 5
        {
                result = ((((float) value - 326) * (5.8 - 5.0)) / (397 - 326)) + 5.0;
        } else if (value > 397 && value < 460) //5.9 - 6.9  --- 6
        {
                result = ((((float) value - 398) * (6.9 - 5.9)) / (459 - 398)) + 5.9;
        } else if (value > 459 && value < 505) //7.0 - 8.0  --- 7
        {
                result = ((((float) value - 460) * (8.0 - 7.0)) / (504 - 460)) + 7.0;
        } else if (value > 504 && value <= 555) //8.1 - 9.3  --- 8
        {
                result = ((((float) value - 505) * (9.3 - 8.1)) / (555 - 505)) + 8.1;
        } else if (value > 555 && value <= 596) //9.4 - 10.8  --- 9
        {
                result = ((((float) value - 556) * (10.8 - 9.4)) / (596 - 556)) + 9.4;
        } else if (value > 596 && value <= 632) //10.9 - 12.8  --- 10
        {
                result = ((((float) value - 597) * (12.8 - 10.9)) / (632 - 597)) + 10.9;
        } else if (value > 632 && value <= 663) //12.9 - 15.0  --- 11
        {
                result = ((((float) value - 633) * (15.0 - 12.9)) / (663 - 633)) + 12.9;
        } else if (value > 663 && value <= 767) //15.1 - 16.0  ---12
        {
                result = ((((float) value - 664) * (16.0 - 15.1)) / (767 - 664)) + 15.1;
        } else if (value > 767 && value <= 844) //16.1 - 17.1  --- 13
        {
                result = ((((float) value - 768) * (17.1 - 16.1)) / (844 - 768)) + 16.1;
        } else if (value > 844 && value <= 892) //17.2 - 18.3  --- 14
        {
                result = ((((float) value - 845) * (18.3 - 17.2)) / (892 - 845)) + 17.2;
        } else if (value > 892 && value <= 926) //18.4 - 19.7  -- 15
        {
                result = ((((float) value - 893) * (19.7 - 18.4)) / (926 - 893)) + 18.4;
        } else if (value > 926 && value <= 944) //19.8 - 21.2  --- 16
        {
                result = ((((float) value - 927) * (21.2 - 19.8)) / (944 - 927)) + 19.8;
        } else if (value > 944 && value <= 958) //21.3 - 22.8    ---17
        {
                result = ((((float) value - 945) * (22.8 - 21.3)) / (958 - 945)) + 21.3;
        } else if (value > 958 && value <= 968) //22.9 - 24.5 ---18
        {
                result = ((((float) value - 959) * (24.5 - 22.9)) / (968 - 959)) + 22.9;
        } else if (value > 968 && value <= 974) //24.6 - 26.2  ---19
        {
                result = ((((float) value - 969) * (26.2 - 24.6)) / (974 - 969)) + 24.6;
        } else if (value > 974 && value <= 980) //26.3 - 28.0 ---20
        {
                result = ((((float) value - 975) * (28.0 - 26.3)) / (980 - 975)) + 26.3;
        } else if (value > 980 && value <= 986) //28.1 - 29.8 ---21
        {
                result = ((((float) value - 981) * (29.8 - 28.1)) / (986 - 981)) + 28.1;
        } else if (value > 986 && value <= 991) //29.9 - 31.6 ---22
        {
                result = ((((float) value - 987) * (31.6 - 29.9)) / (991 - 987)) + 29.9;
        } else if (value > 991 && value <= 996) //31.7 - 33.4 ---23
        {
                result = ((((float) value - 992) * (33.4 - 31.7)) / (996 - 992)) + 31.7;
        } else if (value > 996 && value <= 1001) //33.5 - 35.0  ---24
        {
                result = ((((float) value - 997) * (35.0 - 33.5)) / (1001 - 997)) + 33.5;
        } else if (value > 1001) {
                result = 35.00;
        }

        /*else if(value>1001 && value<=1004)//26.1 - 27.0
        {
        	result=((((float)value-1002)*(27.0-26.1))/(1004-1002))+26.1;
        }
        
        else if(value>1004 && value<=1007)//27.1 - 28 .0
        {
        	result=((((float)value-1005)*(28.0-27.1))/(1007-1005))+27.1;
        }
        
        else if(value>1007 && value<=1010)//28.1 - 29 .0
        {
        	result=((((float)value-1008)*(29.0-28.1))/(1010-1008))+28.1;
        }
        
        else if(value>1010 && value<=1013)//29.1 - 30 .0
        {
        	result=((((float)value-1011)*(30.0-29.1))/(1013-1011))+29.1;  // SCLP method
        }
        
        else if(value==1014)
        {
        	result=31.0;
        }
        
        else if(value==1015)
        {
        	result=32.0;
        }
        
        else if(value==1016)
        {
        	result=33.0;
        }
        
        else if(value==1017)
        {
        	result=34.0;
        }
        
        else if(value==1018)
        {
        	result=35.0;
        }
        
        else if(value==1019)
        {
        	result=36.0;
        }
        
        else if(value==1020)
        {
        	result=37.0;
        }
        
        else if(value==1021)
        {
        	result=38.0;
        }
        
        else if(value==1022)
        {
        	result=39.0;
        }
        
        else if(value>1022)
        {
        	result=40.0;
        }*/
        return result;
}
float scaling_Jute(int value) {
        float result = 0.0;

        if (value >= 0 && value < 60) //0 to 7.15  ---1
        {
                result = ((((float) value - 0.0) * (7.15 - 0.0)) / (59 - 0)) + 0;
        } else if (value > 59 && value < 115) //7.16 to 8.0  ---2
        {
                result = ((((float) value - 60) * (8.0 - 7.16)) / (114 - 60)) + 7.16;
        } else if (value > 114 && value < 233) //8.1 - 9.7   ---3
        {
                result = ((((float) value - 115) * (9.7 - 8.1)) / (232 - 115)) + 8.1;
        } else if (value > 232 && value < 326) // 9.8 - 11.2  --- 4
        {
                result = ((((float) value - 233) * (11.2 - 9.8)) / (325 - 233)) + 9.8;
        } else if (value > 325 && value < 398) //11.3 - 12.95   --- 5
        {
                result = ((((float) value - 326) * (12.95 - 11.3)) / (397 - 326)) + 11.3;
        } else if (value > 397 && value < 460) //12.96 - 14.35  --- 6
        {
                result = ((((float) value - 398) * (14.35 - 12.96)) / (459 - 398)) + 12.96;
        } else if (value > 459 && value < 505) //14.36 - 15.75  --- 7
        {
                result = ((((float) value - 460) * (15.75 - 14.36)) / (504 - 460)) + 14.36;
        } else if (value > 504 && value <= 555) //15.76 - 17.32  --- 8
        {
                result = ((((float) value - 505) * (17.32 - 15.76)) / (555 - 505)) + 15.76;
        } else if (value > 555 && value <= 596) //17.33 - 18.64  --- 9
        {
                result = ((((float) value - 556) * (18.64 - 17.33)) / (596 - 556)) + 17.33;
        } else if (value > 596 && value <= 632) //18.65 - 19.4  --- 10
        {
                result = ((((float) value - 597) * (19.4 - 18.65)) / (632 - 597)) + 18.65;
        } else if (value > 632 && value <= 663) //19.5 - 21.0  --- 11
        {
                result = ((((float) value - 633) * (21.0 - 19.5)) / (663 - 633)) + 19.5;
        } else if (value > 663 && value <= 767) //21.1 - 22.0  ---12
        {
                result = ((((float) value - 664) * (22.0 - 21.1)) / (767 - 664)) + 21.1;
        } else if (value > 767 && value <= 844) //22.1 - 23.5  --- 13
        {
                result = ((((float) value - 768) * (23.5 - 22.1)) / (844 - 768)) + 22.1;
        } else if (value > 844 && value <= 892) //23.6 - 26.2  --- 14
        {
                result = ((((float) value - 845) * (26.2 - 23.6)) / (892 - 845)) + 23.6;
        } else if (value > 892 && value <= 926) //26.3 - 28.2  -- 15
        {
                result = ((((float) value - 893) * (28.2 - 26.3)) / (926 - 893)) + 26.3;
        } else if (value > 926 && value <= 944) //28.3 - 30.5  --- 16
        {
                result = ((((float) value - 927) * (30.5 - 28.3)) / (944 - 927)) + 28.3;
        } else if (value > 944 && value <= 958) //30.6 - 33.5    ---17
        {
                result = ((((float) value - 945) * (33.5 - 30.6)) / (958 - 945)) + 30.6;
        } else if (value > 958 && value <= 968) //33.6 - 36.0 ---18
        {
                result = ((((float) value - 959) * (36.0 - 33.6)) / (968 - 959)) + 33.6;
        } else if (value > 968 && value <= 974) //36.1 - 39.0  ---19
        {
                result = ((((float) value - 969) * (39.0 - 36.1)) / (974 - 969)) + 36.1;
        } else if (value > 974 && value <= 980) //39.1 - 42.0 ---20
        {
                result = ((((float) value - 975) * (42.0 - 39.1)) / (980 - 975)) + 39.1;
        } else if (value > 980 && value <= 986) //42.1 - 46.0 ---21
        {
                result = ((((float) value - 981) * (46.0 - 42.1)) / (986 - 981)) + 42.1;
        } else if (value > 986 && value <= 991) //46.1 - 50.0 ---22
        {
                result = ((((float) value - 987) * (50.0 - 46.1)) / (991 - 987)) + 46.1;
        } else if (value > 991 && value <= 996) //50.1 - 55.0 ---23
        {
                result = ((((float) value - 992) * (55.0 - 50.1)) / (996 - 992)) + 50.1;
        } else if (value > 996 && value <= 1001) //55.1 - 60.0  ---24
        {
                result = ((((float) value - 997) * (60.0 - 55.1)) / (1001 - 997)) + 55.1;
        } else if (value > 1001) {
                result = 60.00;
        }

        /*else if(value>1001 && value<=1004)//26.1 - 27.0
        {
        	result=((((float)value-1002)*(27.0-26.1))/(1004-1002))+26.1;
        }
        
        else if(value>1004 && value<=1007)//27.1 - 28 .0
        {
        	result=((((float)value-1005)*(28.0-27.1))/(1007-1005))+27.1;
        }
        
        else if(value>1007 && value<=1010)//28.1 - 29 .0
        {
        	result=((((float)value-1008)*(29.0-28.1))/(1010-1008))+28.1;
        }
        
        else if(value>1010 && value<=1013)//29.1 - 30 .0
        {
        	result=((((float)value-1011)*(30.0-29.1))/(1013-1011))+29.1;  // SCLP method
        }
        
        else if(value==1014)
        {
        	result=31.0;
        }
        
        else if(value==1015)
        {
        	result=32.0;
        }
        
        else if(value==1016)
        {
        	result=33.0;
        }
        
        else if(value==1017)
        {
        	result=34.0;
        }
        
        else if(value==1018)
        {
        	result=35.0;
        }
        
        else if(value==1019)
        {
        	result=36.0;
        }
        
        else if(value==1020)
        {
        	result=37.0;
        }
        
        else if(value==1021)
        {
        	result=38.0;
        }
        
        else if(value==1022)
        {
        	result=39.0;
        }
        
        else if(value>1022)
        {
        	result=40.0;
        }*/
        return result;
}
float scaling_Wool(int value) {
        float result = 0.0;

        if (value >= 0 && value < 60) //0 to 12.0 ---1
        {
                result = ((((float) value - 0.0) * (12.0 - 0.0)) / (59 - 0)) + 0;
        } else if (value > 59 && value < 115) //12.1 to 13.0 ---2
        {
                result = ((((float) value - 60) * (13.0 - 12.1)) / (114 - 60)) + 12.1;
        } else if (value > 114 && value < 233) //13.1 - 15.0 ---3
        {
                result = ((((float) value - 115) * (15.0 - 13.1)) / (232 - 115)) + 13.1;
        } else if (value > 232 && value < 326) // 15.1 - 16.75 ---4
        {
                result = ((((float) value - 233) * (16.75 - 15.1)) / (325 - 233)) + 15.1;
        } else if (value > 325 && value < 398) //16.76 - 18.55 ---5
        {
                result = ((((float) value - 326) * (18.55 - 16.76)) / (397 - 326)) + 16.76;
        } else if (value > 397 && value < 460) //18.56 - 20.0 ---6
        {
                result = ((((float) value - 398) * (20.0 - 18.56)) / (459 - 398)) + 18.56;
        } else if (value > 459 && value < 505) //20.1 - 21.45 ---7
        {
                result = ((((float) value - 460) * (21.45 - 20.1)) / (504 - 460)) + 20.1;
        } else if (value > 504 && value <= 555) //21.46 - 23.07 ---8
        {
                result = ((((float) value - 505) * (23.07 - 21.46)) / (555 - 505)) + 21.46;
        } else if (value > 555 && value <= 596) //23.08 - 24.39 ---9
        {
                result = ((((float) value - 556) * (24.39 - 23.08)) / (596 - 556)) + 23.08;
        } else if (value > 596 && value <= 632) //24.40 - 25.15 ---10
        {
                result = ((((float) value - 597) * (25.15 - 24.40)) / (632 - 597)) + 24.40;
        } else if (value > 632 && value <= 663) //25.16 - 27.0 ---11
        {
                result = ((((float) value - 633) * (27.0 - 25.16)) / (663 - 633)) + 25.16;
        } else if (value > 663) {
                result = 27.00;
        }

        /*else if(value>663 && value<=767)//20.1 - 21.2 ---12
        {
        	result=((((float)value-664)*(21.2-20.1))/(767-664))+20.1;
        }

        else if(value>767 && value<=844)//21.3 - 22.3 ---13
        {
        	result=((((float)value-768)*(22.3-21.3))/(844-768))+21.3;
        }

        else if(value>844 && value<=892)//22.4 - 23.5 ---14
        {
        	result=((((float)value-845)*(23.5-22.4))/(892-845))+22.4;
        }

        else if(value>892 && value<=926)//23.6 - 24.9 ---15
        {
        	result=((((float)value-893)*(24.9-23.6))/(926-893))+23.6;
        }

        else if(value>926 && value<=944)//25.0 - 26.3 ---16
        {
        	result=((((float)value-927)*(26.3-25.0))/(944-927))+25.0;
        }

        else if(value>944 && value<=958)//26.4 - 27.8 ---17
        {
        	result=((((float)value-945)*(27.8-26.4))/(958-945))+26.4;
        }

        else if(value>958 && value<=968)//27.9 - 29.4 ---18
        {
        	result=((((float)value-959)*(29.4-27.9))/(968-959))+27.9;
        }

        else if(value>968 && value<=974)//29.5 - 31.0 ---19
        {
        	result=((((float)value-969)*(31.0-29.5))/(974-969))+29.5;
        }

        else if(value>974 && value<=980)//31.1 - 32.7 ---20
        {
        	result=((((float)value-975)*(32.7-31.1))/(980-975))+31.1;
        }

        else if(value>980 && value<=986)//32.8 - 34.4 ---21
        {
        	result=((((float)value-981)*(34.4-32.8))/(986-981))+32.8;
        }

        else if(value>986 && value<=991)//34.5 - 36.2 ---22
        {
        	result=((((float)value-987)*(36.2-34.5))/(991-987))+34.5;
        }

        else if(value>991 && value<=996)//36.3 - 38.0 ---23
        {
        	result=((((float)value-992)*(38.0-36.3))/(996-992))+36.3;
        }

        else if(value>996 && value<=1001)//38.1 - 40.0 ---24
        {
        	result=((((float)value-997)*(40.0-38.1))/(1001-997))+38.1;
        }

        else if(value>1001 && value<=1004)//26.1 - 27.0
        {
        	result=((((float)value-1002)*(27.0-26.1))/(1004-1002))+26.1;
        }

        else if(value>1004 && value<=1007)//27.1 - 28 .0
        {
        	result=((((float)value-1005)*(28.0-27.1))/(1007-1005))+27.1;
        }

        else if(value>1007 && value<=1010)//28.1 - 29 .0
        {
        	result=((((float)value-1008)*(29.0-28.1))/(1010-1008))+28.1;
        }

        else if(value>1010 && value<=1013)//29.1 - 30 .0
        {
        	result=((((float)value-1011)*(30.0-29.1))/(1013-1011))+29.1;
        }

        else if(value==1014)
        {
        	result=31.0;
        }

        else if(value==1015)
        {
        	result=32.0;
        }

        else if(value==1016)
        {
        	result=33.0;
        }

        else if(value==1017)
        {
        	result=34.0;
        }

        else if(value==1018)
        {
        	result=35.0;
        }

        else if(value==1019)
        {
        	result=36.0;
        }

        else if(value==1020)
        {
        	result=37.0;
        }

        else if(value==1021)
        {
        	result=38.0;
        }

        else if(value==1022)
        {
        	result=39.0;
        }

        else if(value>1022)
        {
        	result=40.0;
        } */
        return result;
}
float scaling_Rayon(int value) {
        float result = 0.0;

        if (value >= 0 && value < 60) //0 to 5.85 ---1
        {
                result = ((((float) value - 0.0) * (5.85 - 0.0)) / (59 - 0)) + 0;
        } else if (value > 59 && value < 115) //5.86 to 6.7 ---2
        {
                result = ((((float) value - 60) * (6.7 - 5.86)) / (114 - 60)) + 5.86;
        } else if (value > 114 && value < 233) //6.8 - 8.4 ---3
        {
                result = ((((float) value - 115) * (8.4 - 6.8)) / (232 - 115)) + 6.8;
        } else if (value > 232 && value < 326) // 8.5 - 9.98 ---4
        {
                result = ((((float) value - 233) * (9.98 - 8.5)) / (325 - 233)) + 8.5;
        } else if (value > 325 && value < 398) //9.99 - 11.7 ---5
        {
                result = ((((float) value - 326) * (11.7 - 9.99)) / (397 - 326)) + 9.99;
        } else if (value > 397 && value < 460) //11.8 - 13.3 ---6
        {
                result = ((((float) value - 398) * (13.3 - 11.8)) / (459 - 398)) + 11.8;
        } else if (value > 459 && value < 505) //13.4 - 14.7 ---7
        {
                result = ((((float) value - 460) * (14.7 - 13.4)) / (504 - 460)) + 13.4;
        } else if (value > 504 && value <= 555) //14.8 - 16.45 ---8
        {
                result = ((((float) value - 505) * (16.45 - 14.8)) / (555 - 505)) + 14.8;
        } else if (value > 555 && value <= 596) //16.46 - 17.94 ---9
        {
                result = ((((float) value - 556) * (17.94 - 16.46)) / (596 - 556)) + 16.46;
        } else if (value > 596 && value <= 632) //17.95 - 18.8 ---10
        {
                result = ((((float) value - 597) * (18.8 - 17.95)) / (632 - 597)) + 17.95;
        } else if (value > 632 && value <= 663) //18.9 - 20.0 ---11
        {
                result = ((((float) value - 633) * (20.0 - 18.9)) / (663 - 633)) + 18.9;
        } else if (value > 663 && value <= 767) //20.1 - 21.2 ---12
        {
                result = ((((float) value - 664) * (21.2 - 20.1)) / (767 - 664)) + 20.1;
        } else if (value > 767 && value <= 844) //21.3 - 22.3 ---13
        {
                result = ((((float) value - 768) * (22.3 - 21.3)) / (844 - 768)) + 21.3;
        } else if (value > 844 && value <= 892) //22.4 - 23.5 ---14
        {
                result = ((((float) value - 845) * (23.5 - 22.4)) / (892 - 845)) + 22.4;
        } else if (value > 892 && value <= 926) //23.6 - 24.9 ---15
        {
                result = ((((float) value - 893) * (24.9 - 23.6)) / (926 - 893)) + 23.6;
        } else if (value > 926 && value <= 944) //25.0 - 26.3 ---16
        {
                result = ((((float) value - 927) * (26.3 - 25.0)) / (944 - 927)) + 25.0;
        } else if (value > 944 && value <= 958) //26.4 - 27.8 ---17
        {
                result = ((((float) value - 945) * (27.8 - 26.4)) / (958 - 945)) + 26.4;
        } else if (value > 958 && value <= 968) //27.9 - 29.4 ---18
        {
                result = ((((float) value - 959) * (29.4 - 27.9)) / (968 - 959)) + 27.9;
        } else if (value > 968 && value <= 974) //29.5 - 31.0 ---19
        {
                result = ((((float) value - 969) * (31.0 - 29.5)) / (974 - 969)) + 29.5;
        } else if (value > 974 && value <= 980) //31.1 - 32.7 ---20
        {
                result = ((((float) value - 975) * (32.7 - 31.1)) / (980 - 975)) + 31.1;
        } else if (value > 980 && value <= 986) //32.8 - 34.4 ---21
        {
                result = ((((float) value - 981) * (34.4 - 32.8)) / (986 - 981)) + 32.8;
        } else if (value > 986 && value <= 991) //34.5 - 36.2 ---22
        {
                result = ((((float) value - 987) * (36.2 - 34.5)) / (991 - 987)) + 34.5;
        } else if (value > 991 && value <= 996) //36.3 - 38.0 ---23
        {
                result = ((((float) value - 992) * (38.0 - 36.3)) / (996 - 992)) + 36.3;
        } else if (value > 996 && value <= 1001) //38.1 - 40.0 ---24
        {
                result = ((((float) value - 997) * (40.0 - 38.1)) / (1001 - 997)) + 38.1;
        } else if (value > 1001) {
                result = 40.00;
        }

        /*else if(value>1001 && value<=1004)//26.1 - 27.0
        {
        	result=((((float)value-1002)*(27.0-26.1))/(1004-1002))+26.1;
        }

        else if(value>1004 && value<=1007)//27.1 - 28 .0
        {
        	result=((((float)value-1005)*(28.0-27.1))/(1007-1005))+27.1;
        }

        else if(value>1007 && value<=1010)//28.1 - 29 .0
        {
        	result=((((float)value-1008)*(29.0-28.1))/(1010-1008))+28.1;
        }

        else if(value>1010 && value<=1013)//29.1 - 30 .0
        {
        	result=((((float)value-1011)*(30.0-29.1))/(1013-1011))+29.1;
        }

        else if(value==1014)
        {
        	result=31.0;
        }

        else if(value==1015)
        {
        	result=32.0;
        }

        else if(value==1016)
        {
        	result=33.0;
        }

        else if(value==1017)
        {
        	result=34.0;
        }

        else if(value==1018)
        {
        	result=35.0;
        }

        else if(value==1019)
        {
        	result=36.0;
        }

        else if(value==1020)
        {
        	result=37.0;
        }

        else if(value==1021)
        {
        	result=38.0;
        }

        else if(value==1022)
        {
        	result=39.0;
        }

        else if(value>1022)
        {
        	result=40.0;
        } */
        return result;
}
float scaling_Paper(int value) {
        float result = 0.0;

        if (value >= 0 && value < 60) //0 to 2.5 ---1
        {
                result = ((((float) value - 0.0) * (2.5 - 0.0)) / (59 - 0)) + 0;
        } else if (value > 59 && value < 115) //2.6 to 3.0 ---2
        {
                result = ((((float) value - 60) * (3.0 - 2.6)) / (114 - 60)) + 2.6;
        } else if (value > 114 && value < 233) //3.1 - 3.8 ---3
        {
                result = ((((float) value - 115) * (3.8 - 3.1)) / (232 - 115)) + 3.1;
        } else if (value > 232 && value < 326) // 3.9 - 4.8 ---4
        {
                result = ((((float) value - 233) * (4.8 - 3.9)) / (325 - 233)) + 3.9;
        } else if (value > 325 && value < 398) //4.9 - 6.0 ---5
        {
                result = ((((float) value - 326) * (6.0 - 4.9)) / (397 - 326)) + 4.9;
        } else if (value > 397 && value < 460) //6.1 - 7.7 ---6
        {
                result = ((((float) value - 398) * (7.7 - 6.1)) / (459 - 398)) + 6.1;
        } else if (value > 459 && value < 505) //7.8 - 9.5 ---7
        {
                result = ((((float) value - 460) * (9.5 - 7.8)) / (504 - 460)) + 7.8;
        } else if (value > 504 && value <= 555) //9.6 - 11.6 ---8
        {
                result = ((((float) value - 505) * (11.6 - 9.6)) / (555 - 505)) + 9.6;
        } else if (value > 555 && value <= 596) //11.7 - 13.5 ---9
        {
                result = ((((float) value - 556) * (13.5 - 11.7)) / (596 - 556)) + 11.7;
        } else if (value > 596 && value <= 632) //13.6 - 15.5 ---10
        {
                result = ((((float) value - 597) * (15.5 - 13.6)) / (632 - 597)) + 13.6;
        } else if (value > 632 && value <= 663) //15.6 - 17.5 ---11
        {
                result = ((((float) value - 633) * (17.5 - 15.6)) / (663 - 633)) + 15.6;
        } else if (value > 663 && value <= 767) //17.6 - 20.0 ---12
        {
                result = ((((float) value - 664) * (20.0 - 17.6)) / (767 - 664)) + 17.6;
        } else if (value > 767 && value <= 844) //20.1 - 24.0 ---13
        {
                result = ((((float) value - 768) * (24.0 - 20.1)) / (844 - 768)) + 20.1;
        } else if (value > 844 && value <= 892) //24.1 - 29.0 ---14
        {
                result = ((((float) value - 845) * (29.0 - 24.1)) / (892 - 845)) + 24.1;
        } else if (value > 892 && value <= 926) //29.1 - 36.0 ---15
        {
                result = ((((float) value - 893) * (36.0 - 29.1)) / (926 - 893)) + 29.1;
        } else if (value > 926 && value <= 944) //36.1 - 44.0 ---16
        {
                result = ((((float) value - 927) * (44.0 - 36.1)) / (944 - 927)) + 36.1;
        } else if (value > 944 && value <= 958) //44.1 - 54.0 ---17
        {
                result = ((((float) value - 945) * (54.0 - 44.1)) / (958 - 945)) + 44.1;
        } else if (value > 958 && value <= 968) //54.1 - 65.0 ---18
        {
                result = ((((float) value - 959) * (65.0 - 54.1)) / (968 - 959)) + 54.1;
        } else if (value > 968 && value <= 974) //65.1 - 79.0 ---19
        {
                result = ((((float) value - 969) * (79.0 - 65.1)) / (974 - 969)) + 65.1;
        } else if (value > 974 && value <= 980) //79.1 - 94.0 ---20
        {
                result = ((((float) value - 975) * (94.0 - 79.1)) / (980 - 975)) + 79.1;
        } else if (value > 980 && value <= 986) //94.1 - 113.0 ---21
        {
                result = ((((float) value - 981) * (113.0 - 94.1)) / (986 - 981)) + 94.1;
        } else if (value > 986 && value <= 991) //113.1 - 133.0 ---22
        {
                result = ((((float) value - 987) * (133.0 - 113.1)) / (991 - 987)) + 113.1;
        } else if (value > 991 && value <= 996) //133.1 - 153.0 ---23
        {
                result = ((((float) value - 992) * (153.0 - 133.1)) / (996 - 992)) + 133.1;
        } else if (value > 996 && value <= 1001) //153.1 - 173.0 ---24
        {
                result = ((((float) value - 997) * (173.0 - 153.1)) / (1001 - 997)) + 153.1;
        } else if (value > 1001) {
                result = 173.50;
        }

        /*else if(value>1001 && value<=1004)//26.1 - 27.0
        {
        	result=((((float)value-1002)*(27.0-26.1))/(1004-1002))+26.1;
        }

        else if(value>1004 && value<=1007)//27.1 - 28 .0
        {
        	result=((((float)value-1005)*(28.0-27.1))/(1007-1005))+27.1;
        }

        else if(value>1007 && value<=1010)//28.1 - 29 .0
        {
        	result=((((float)value-1008)*(29.0-28.1))/(1010-1008))+28.1;
        }

        else if(value>1010 && value<=1013)//29.1 - 30 .0
        {
        	result=((((float)value-1011)*(30.0-29.1))/(1013-1011))+29.1;
        }

        else if(value==1014)
        {
        	result=31.0;
        }

        else if(value==1015)
        {
        	result=32.0;
        }

        else if(value==1016)
        {
        	result=33.0;
        }

        else if(value==1017)
        {
        	result=34.0;
        }

        else if(value==1018)
        {
        	result=35.0;
        }

        else if(value==1019)
        {
        	result=36.0;
        }

        else if(value==1020)
        {
        	result=37.0;
        }

        else if(value==1021)
        {
        	result=38.0;
        }

        else if(value==1022)
        {
        	result=39.0;
        }

        else if(value>1022)
        {
        	result=40.0;
        } */
        return result;
}
float Scaling_Cotton_Seed(int value) {
        float result = 0.0;

        if (value >= 0 && value < 60) //0 to 5
        {
                result = ((((float) value - 0.0) * (0.0 - 5.0)) / (59 - 0)) + 0;
        } else if (value > 59 && value < 115) //5.0 to 5.6
        {
                result = ((((float) value - 60) * (5.6 - 5.0)) / (114 - 60)) + 5.0;
        } else if (value > 114 && value < 233) //5.7 - 6.6
        {
                result = ((((float) value - 115) * (6.6 - 5.7)) / (232 - 115)) + 5.7;
        } else if (value > 232 && value < 326) // 6.7 - 7.5
        {
                result = ((((float) value - 233) * (7.5 - 6.7)) / (325 - 233)) + 6.7;
        } else if (value > 325 && value < 398) //7.6 - 8.4
        {
                result = ((((float) value - 326) * (8.4 - 7.6)) / (397 - 326)) + 7.6;
        } else if (value > 397 && value < 460) //8.5 - 9.4
        {
                result = ((((float) value - 398) * (9.4 - 8.5)) / (459 - 398)) + 8.5;
        } else if (value > 459 && value < 505) //9.5 - 10.4
        {
                result = ((((float) value - 460) * (10.4 - 9.5)) / (504 - 460)) + 9.5;
        } else if (value > 504 && value <= 555) //10.5 - 11.5
        {
                result = ((((float) value - 505) * (11.5 - 10.5)) / (555 - 505)) + 10.5;
        } else if (value > 555 && value <= 596) //11.6 - 12.7
        {
                result = ((((float) value - 556) * (12.7 - 11.6)) / (596 - 556)) + 11.6;
        } else if (value > 596 && value <= 632) //12.8 - 13.8
        {
                result = ((((float) value - 597) * (13.8 - 12.8)) / (632 - 597)) + 12.8;
        } else if (value > 632 && value <= 663) //13.9 - 15.0
        {
                result = ((((float) value - 633) * (15.0 - 13.9)) / (663 - 633)) + 13.9;
        } else if (value > 663 && value <= 767) //15.1 - 16.2
        {
                result = ((((float) value - 664) * (16.2 - 15.1)) / (767 - 664)) + 15.1;
        } else if (value > 767 && value <= 844) //16.3 - 17.4
        {
                result = ((((float) value - 768) * (17.4 - 16.3)) / (844 - 768)) + 16.3;
        } else if (value > 844 && value <= 892) //17.5 - 18.6
        {
                result = ((((float) value - 845) * (18.6 - 17.5)) / (892 - 845)) + 17.5;
        } else if (value > 892 && value <= 926) //18.7 - 19.9
        {
                result = ((((float) value - 893) * (19.9 - 18.7)) / (926 - 893)) + 18.7;
        } else if (value > 926 && value <= 944) //20.0 - 21.2
        {
                result = ((((float) value - 927) * (21.2 - 20.0)) / (944 - 927)) + 20.0;
        } else if (value > 944 && value <= 958) //21.3 - 22.5
        {
                result = ((((float) value - 945) * (22.5 - 21.3)) / (958 - 945)) + 21.3;
        } else if (value > 958 && value <= 968) //22.6 - 23.7
        {
                result = ((((float) value - 959) * (23.7 - 22.6)) / (968 - 959)) + 22.6;
        } else if (value > 968 && value <= 974) //23.8 - 25.3
        {
                result = ((((float) value - 969) * (25.3 - 23.8)) / (974 - 969)) + 23.8;
        } else if (value > 974 && value <= 980) //25.4 - 26.7
        {
                result = ((((float) value - 975) * (26.7 - 25.4)) / (980 - 975)) + 25.4;
        } else if (value > 980 && value <= 986) //26.8 - 28.1
        {
                result = ((((float) value - 981) * (28.1 - 26.8)) / (986 - 981)) + 26.8;
        } else if (value > 986 && value <= 991) //28.2 - 29.5
        {
                result = ((((float) value - 987) * (29.5 - 28.2)) / (991 - 987)) + 28.2;
        } else if (value > 991 && value <= 996) //29.6 - 31.0
        {
                result = ((((float) value - 992) * (31.0 - 29.6)) / (996 - 992)) + 29.6;
        } else if (value > 996 && value <= 1001) //31.1 - 32.5
        {
                result = ((((float) value - 997) * (32.5 - 31.1)) / (1001 - 997)) + 31.1;
        } else if (value > 1011) {
                result = 31.00;
        }

        /*else if(value>1001 && value<=1004)//26.1 - 27.0
        {
        	result=((((float)value-1002)*(27.0-26.1))/(1004-1002))+26.1;
        }

        else if(value>1004 && value<=1007)//27.1 - 28 .0
        {
        	result=((((float)value-1005)*(28.0-27.1))/(1007-1005))+27.1;
        }

        else if(value>1007 && value<=1010)//28.1 - 29 .0
        {
        	result=((((float)value-1008)*(29.0-28.1))/(1010-1008))+28.1;
        }

        else if(value>1010 && value<=1013)//29.1 - 30 .0
        {
        	result=((((float)value-1011)*(30.0-29.1))/(1013-1011))+29.1;
        }

        else if(value==1014)
        {
        	result=31.0;
        }

        else if(value==1015)
        {
        	result=32.0;
        }

        else if(value==1016)
        {
        	result=33.0;
        }

        else if(value==1017)
        {
        	result=34.0;
        }

        else if(value==1018)
        {
        	result=35.0;
        }

        else if(value==1019)
        {
        	result=36.0;
        }

        else if(value==1020)
        {
        	result=37.0;
        }

        else if(value==1021)
        {
        	result=38.0;
        }

        else if(value==1022)
        {
        	result=39.0;
        }

        else if(value>1022)
        {
        	result=40.0;
        }*/
        return result;
}
float scaling_Viscose(int value) {
        float result = 0.0;

        if (value >= 0 && value < 60) //0 to 6.6
        {
                result = ((((float) value - 0.0) * (6.6 - 0.0)) / (59 - 0)) + 0;
        } else if (value > 59 && value < 115) //6.7 to 7.5
        {
                result = ((((float) value - 60) * (7.5 - 6.7)) / (114 - 60)) + 6.7;
        } else if (value > 114 && value < 233) //6.7 - 9.4
        {
                result = ((((float) value - 115) * (9.4 - 6.7)) / (232 - 115)) + 6.7;
        } else if (value > 232 && value < 326) // 9.5 - 11.4
        {
                result = ((((float) value - 233) * (11.4 - 9.5)) / (325 - 233)) + 9.5;
        } else if (value > 325 && value < 398) //11.5 - 13.2
        {
                result = ((((float) value - 326) * (13.2 - 11.5)) / (397 - 326)) + 11.5;
        } else if (value > 397 && value < 460) //13.3 - 15.0
        {
                result = ((((float) value - 398) * (15.0 - 13.3)) / (459 - 398)) + 13.3;
        } else if (value > 459 && value < 505) //15.1 - 16.8
        {
                result = ((((float) value - 460) * (16.8 - 15.1)) / (504 - 460)) + 15.1;
        } else if (value > 504 && value <= 555) //16.9 - 18.8
        {
                result = ((((float) value - 505) * (18.8 - 16.9)) / (555 - 505)) + 16.9;
        } else if (value > 555 && value <= 596) //18.9 - 20.2
        {
                result = ((((float) value - 556) * (20.2 - 18.9)) / (596 - 556)) + 18.9;
        } else if (value > 596 && value <= 632) //20.3 - 21.0
        {
                result = ((((float) value - 597) * (21.0 - 20.3)) / (632 - 597)) + 20.3;
        } else if (value > 632 && value <= 663) //21.1 - 23.0
        {
                result = ((((float) value - 633) * (23.0 - 21.1)) / (663 - 633)) + 21.1;
        } else if (value > 663 && value <= 767) //23.1 - 24.5
        {
                result = ((((float) value - 664) * (24.5 - 23.1)) / (767 - 664)) + 23.1;
        } else if (value > 767 && value <= 844) //24.6 - 26.0
        {
                result = ((((float) value - 768) * (26.0 - 24.6)) / (844 - 768)) + 24.6;
        } else if (value > 844 && value <= 892) //26.0 - 27.6
        {
                result = ((((float) value - 845) * (27.6 - 26.0)) / (892 - 845)) + 26.0;
        } else if (value > 892 && value <= 926) //26.7 - 29.2
        {
                result = ((((float) value - 893) * (29.2 - 26.7)) / (926 - 893)) + 26.7;
        } else if (value > 926 && value <= 944) //29.2 - 30.8
        {
                result = ((((float) value - 927) * (30.8 - 29.2)) / (944 - 927)) + 29.2;
        } else if (value > 944 && value <= 958) //30.9 - 32.5
        {
                result = ((((float) value - 945) * (32.5 - 30.9)) / (958 - 945)) + 30.9;
        } else if (value > 958 && value <= 968) //32.6 - 34.3
        {
                result = ((((float) value - 959) * (34.3 - 32.6)) / (968 - 959)) + 32.6;
        } else if (value > 968 && value <= 974) //34.4 - 36.1
        {
                result = ((((float) value - 969) * (36.1 - 34.4)) / (974 - 969)) + 34.4;
        } else if (value > 974 && value <= 980) //36.2 - 38.0
        {
                result = ((((float) value - 975) * (38.0 - 36.2)) / (980 - 975)) + 36.2;
        } else if (value > 980 && value <= 986) //38.1 - 40.0
        {
                result = ((((float) value - 981) * (40.0 - 38.1)) / (986 - 981)) + 38.1;
        } else if (value > 986 && value <= 991) //40.1 - 42.0
        {
                result = ((((float) value - 987) * (42.0 - 40.1)) / (991 - 987)) + 40.1;
        } else if (value > 991 && value <= 996) //42.1 - 44.0
        {
                result = ((((float) value - 992) * (44.0 - 42.1)) / (996 - 992)) + 42.1;
        } else if (value > 996 && value <= 1001) //44.1 - 46.0
        {
                result = ((((float) value - 997) * (46.0 - 44.1)) / (1001 - 997)) + 44.1;
        } else if (value > 1001) {
                result = 46.00;
        }

        /*else if(value>1001 && value<=1004)//26.1 - 27.0
        {
        	result=((((float)value-1002)*(27.0-26.1))/(1004-1002))+26.1;
        }

        else if(value>1004 && value<=1007)//27.1 - 28 .0
        {
        	result=((((float)value-1005)*(28.0-27.1))/(1007-1005))+27.1;
        }

        else if(value>1007 && value<=1010)//28.1 - 29 .0
        {
        	result=((((float)value-1008)*(29.0-28.1))/(1010-1008))+28.1;
        }

        else if(value>1010 && value<=1013)//29.1 - 30 .0
        {
        	result=((((float)value-1011)*(30.0-29.1))/(1013-1011))+29.1;
        }

        else if(value==1014)
        {
        	result=31.0;
        }

        else if(value==1015)
        {
        	result=32.0;
        }

        else if(value==1016)
        {
        	result=33.0;
        }

        else if(value==1017)
        {
        	result=34.0;
        }

        else if(value==1018)
        {
        	result=35.0;
        }

        else if(value==1019)
        {
        	result=36.0;
        }

        else if(value==1020)
        {
        	result=37.0;
        }

        else if(value==1021)
        {
        	result=38.0;
        }

        else if(value==1022)
        {
        	result=39.0;
        }

        else if(value>1022)
        {
        	result=40.0;
        }*/
        return result;
}

float scaling_Polyster(int value) {
        float result = 0.0;

        if (value >= 0 && value < 60) //0 to 0.3
        {
                result = ((((float) value - 0.0) * (0.3 - 0.0)) / (59 - 0)) + 0;
        } else if (value > 59 && value < 115) //0.4 to 0.5
        {
                result = ((((float) value - 60) * (0.5 - 0.4)) / (114 - 60)) + 0.4;
        } else if (value > 114 && value < 233) //0.51 - 0.6
        {
                result = ((((float) value - 115) * (0.6 - 0.51)) / (232 - 115)) + 0.51;
        } else if (value > 232 && value < 326) // 0.61 - 0.74
        {
                result = ((((float) value - 233) * (0.74 - 0.61)) / (325 - 233)) + 0.61;
        } else if (value > 325 && value < 398) //0.75 - 0.89/
	    {
                result = ((((float) value - 326) * (0.89 - 0.75)) / (397 - 326)) + 0.75;
        } else if (value > 397 && value < 460) //0.9 - 1.01
        {
                result = ((((float) value - 398) * (1.01 - 0.9)) / (459 - 398)) + 0.9;
        } else if (value > 459 && value < 505) //1.02 - 1.1
        {
                result = ((((float) value - 460) * (1.1 - 1.02)) / (504 - 460)) + 1.02;
        } else if (value > 504 && value <= 555) //1.11 - 1.19
        {
                result = ((((float) value - 505) * (1.9 - 1.11)) / (555 - 505)) + 1.11;
        } else if (value > 555 && value <= 596) //1.19 - 1.26
        {
                result = ((((float) value - 556) * (1.26 - 1.19)) / (596 - 556)) + 1.19;
        } else if (value > 596 && value <= 632) //1.26 - 1.3
        {
                result = ((((float) value - 597) * (1.3 - 1.26)) / (632 - 597)) + 1.26;
        } else if (value > 632 && value <= 663) //1.31 - 1.4
        {
                result = ((((float) value - 633) * (1.4 - 1.31)) / (663 - 633)) + 1.31;
        } else if (value > 663 && value <= 767) //1.41 - 1.5
        {
                result = ((((float) value - 664) * (1.5 - 1.41)) / (767 - 664)) + 1.41;
        } else if (value > 767 && value <= 844) //1.51 - 1.6
        {
                result = ((((float) value - 768) * (1.6 - 1.51)) / (844 - 768)) + 1.51;
        } else if (value > 844 && value <= 892) //1.61 - 1.7
        {
                result = ((((float) value - 845) * (1.7 - 1.61)) / (892 - 845)) + 1.61;
        } else if (value > 892 && value <= 926) //1.71 - 1.8
        {
                result = ((((float) value - 893) * (1.8 - 1.71)) / (926 - 893)) + 1.71;
        } else if (value > 926 && value <= 944) //1.81 - 1.9
        {
                result = ((((float) value - 927) * (1.9 - 1.81)) / (944 - 927)) + 1.81;
        } else if (value > 944 && value <= 958) //1.91 - 2.0
        {
                result = ((((float) value - 945) * (2.0 - 1.91)) / (958 - 945)) + 1.91;
        } else if (value > 958) {
                result = 2.00;
        }

        /*else if(value>958 && value<=968)//19.1 - 20.0
        {
        	result=((((float)value-959)*(20.0-19.1))/(968-959))+19.1;
        }

        else if(value>968 && value<=974)//20.1 - 21.0
        {
        	result=((((float)value-969)*(21.0-20.1))/(974-969))+20.1;
        }

        else if(value>974 && value<=980)//21.1 - 22.0
        {
        	result=((((float)value-975)*(22.0-21.1))/(980-975))+21.1;
        }

        else if(value>980 && value<=986)//22.1 - 23.0
        {
        	result=((((float)value-981)*(23.0-22.1))/(986-981))+22.1;
        }

        else if(value>986 && value<=991)//23.1 - 24.0
        {
        	result=((((float)value-987)*(24.0-23.1))/(991-987))+23.1;
        }

        else if(value>991 && value<=996)//24.1 - 25.0
        {
        	result=((((float)value-992)*(25.0-24.1))/(996-992))+24.1;
        }

        else if(value>996 && value<=1001)//25.1 - 26.0
        {
        	result=((((float)value-997)*(26.0-25.1))/(1001-997))+25.1;
        }

        else if(value>1001 && value<=1004)//26.1 - 27.0
        {
        	result=((((float)value-1002)*(27.0-26.1))/(1004-1002))+26.1;
        }

        else if(value>1004 && value<=1007)//27.1 - 28 .0
        {
        	result=((((float)value-1005)*(28.0-27.1))/(1007-1005))+27.1;
        }

        else if(value>1007 && value<=1010)//28.1 - 29 .0
        {
        	result=((((float)value-1008)*(29.0-28.1))/(1010-1008))+28.1;
        }

        else if(value>1010 && value<=1013)//29.1 - 30 .0
        {
        	result=((((float)value-1011)*(30.0-29.1))/(1013-1011))+29.1;
        }

        else if(value==1014)
        {
        	result=31.0;
        }

        else if(value==1015)
        {
        	result=32.0;
        }

        else if(value==1016)
        {
        	result=33.0;
        }

        else if(value==1017)
        {
        	result=34.0;
        }

        else if(value==1018)
        {
        	result=35.0;
        }

        else if(value==1019)
        {
        	result=36.0;
        }

        else if(value==1020)
        {
        	result=37.0;
        }

        else if(value==1021)
        {
        	result=38.0;
        }

        else if(value==1022)
        {
        	result=39.0;
        }

        else if(value>1022)
        {
        	result=40.0;
        }*/
        return result;
}