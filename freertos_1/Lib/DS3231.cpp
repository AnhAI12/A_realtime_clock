/*
 * DS3231.cpp
 *
 *  Created on: Sep 22, 2024
 *      Author: LeDuyAnh
 */

#include "DS3231.h"

DS3231::DS3231() {
	// TODO Auto-generated constructor stub

}

DS3231::~DS3231() {
	// TODO Auto-generated destructor stub
}


uint8_t DS3231::DS3231_GetRegByte(uint8_t regAddr) {
	uint8_t val;                          //must shift 1 bit, requires by HAL I2C
	HAL_I2C_Master_Transmit(ds3231_dev, DS3231_ADDR << 1, &regAddr, 1, DS3231_TIMEOUT);
	HAL_I2C_Master_Receive(ds3231_dev, DS3231_ADDR << 1, &val, 1, DS3231_TIMEOUT);
  // HAL_I2C_Mem_Write (ds3231_dev, DS3231_ADDR << 1, regAddr, I2C_MEMADD_SIZE_8BIT, uint8_t * pData, uint16_t Size, uint32_t Timeout);
	return val;
}

void DS3231::DS3231_SetRegByte(uint8_t regAddr, uint8_t val) {
	uint8_t bytes[2] = { regAddr, val };
	HAL_I2C_Master_Transmit(ds3231_dev, DS3231_ADDR << 1, bytes, 2, DS3231_TIMEOUT);
  // HAL_I2C_Mem_Write (ds3231_dev, DS3231_ADDR << 1, regAddr, I2C_MEMADD_SIZE_8BIT, uint8_t * pData, uint16_t Size, uint32_t Timeout);
}

float DS3231::DS3231_GetTemp(){
    float val, val1, val2;
  val1 = DS3231_GetRegByte(TEMP_UPPER);
  val2 = DS3231_GetRegByte(TEMP_LOWER) >> 6;
  val = val1 + val2*0.25f;
  return val;
}

