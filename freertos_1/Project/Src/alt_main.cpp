/*
 * alt_main.cpp
 *
 *  Created on: Sep 22, 2024
 *      Author: LeDuyAnh
 */
#include "main.h"
// #include "lcd1602_i2c.h"
void alt_main(){

	DS3231 ds3231_dev;
	ds3231_dev.ds3231_init();
	// lcd1602_Init(&lcd1602_Handle, &hi2c1, PCF8574A_ADDRESS);
	// lcd1602_Print(&lcd1602_Handle, "Hello world!");
	float temp_val=0;
	while(1){
		temp_val = ds3231_dev.DS3231_GetTemp();
		HAL_Delay(1000);
	}
}

