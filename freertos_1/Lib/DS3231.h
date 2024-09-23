/*
 * DS3231.h
 *
 *  Created on: Sep 22, 2024
 *      Author: LeDuyAnh
 */

#ifndef DS3231_H_
#define DS3231_H_

#include "stm32f4xx_hal.h"
extern I2C_HandleTypeDef hi2c1;

#define DS3231_TIMEOUT		HAL_MAX_DELAY
#define DS3231_ADDR 0x68
// #define DS3231_TIMEOUT		HAL_MAX_DELAY
#define SEC_ADDR    0x00
#define MIN_ADDR    0x01
#define HOUR_ADDR   0x02
#define DATE_ADDR    0x04
#define MON_ADDR    0x05
#define YEAR_ADDR   0x06
#define TEMP_UPPER  0x11
#define TEMP_LOWER  0x12


#ifdef __cplusplus
  // Put C++ ONLY declataions here before the 'extern "C"' below
  class DS3231 {
public:
	DS3231();
	virtual ~DS3231();
	// void ds3231_init(I2C_HandleTypeDef *hi2c1);
	void ds3231_init();
	float DS3231_GetTemp();
	void DS3231_SetRegByte(uint8_t regAddr, uint8_t val);
	uint8_t DS3231_GetRegByte(uint8_t regAddr);
	void set_day(uint8_t val);
	void set_month(uint8_t val);
	void set_year(uint8_t val);

	void set_sec(uint8_t val);
	void set_min(uint8_t val);
	void set_hour(uint8_t val);

	uint8_t get_day();
	uint8_t get_month();
	uint8_t get_year();

	uint8_t get_sec();
	uint8_t get_min();
	uint8_t get_hour();

private:
    uint8_t hour;
    uint8_t min;
    uint8_t sec;
    uint8_t day;
    uint8_t mon;
    uint8_t year;
    float temp;
    I2C_HandleTypeDef *ds3231_dev;
};

  extern "C" {
#endif

// Put "C" compatible defines and function prototypes here
//  int Some_C_Function( int a );

#ifdef __cplusplus
   }
#endif

#endif /* DS3231_H_ */
