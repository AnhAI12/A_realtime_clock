/*
 * alt_main.cpp
 *
 *  Created on: Sep 22, 2024
 *      Author: LeDuyAnh
 */
#include "main.h"
//#include "stm32f4xx_hal.h"

#define MyI2C_LCD I2C_LCD_1

void to_string(int num, char str2[16]){
	char str[16];
	int temp, num2 = num;
	int i = 0;
	while(num2!=0){
		temp = num2 % 10;
		str[i++] = temp + '0';
		num2 = num2/10;
	}
	for(int k = 0; k < i; k++){
		str2[k] = str[i - k - 1];
	}
	
}

void alt_main(){

	uint8_t temp_val_in=10;
	DS3231 ds3231_dev;
	ds3231_dev.ds3231_init();

	float temp_val=12;
	char str[16];

	I2C_LCD_Init(MyI2C_LCD);
	  I2C_LCD_SetCursor(MyI2C_LCD, 0, 0);
	  I2C_LCD_WriteString(MyI2C_LCD, "DeepBlueMbedded");

	  to_string(temp_val_in, str);
	  I2C_LCD_SetCursor(MyI2C_LCD, 0, 1);
	  I2C_LCD_WriteString(MyI2C_LCD, str);
	HAL_Delay(1000);

	while(1){
		temp_val = ds3231_dev.DS3231_GetTemp();
		temp_val_in = (uint8_t)temp_val;
		to_string(temp_val_in, str);
	  	I2C_LCD_SetCursor(MyI2C_LCD, 0, 1);
	  	I2C_LCD_WriteString(MyI2C_LCD, str);

		HAL_Delay(1000);
	}
}

