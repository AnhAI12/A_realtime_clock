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

// void ds3231::ds3231_init(I2C_HandleTypeDef *hi2c1_p = &hi2c1){
//   this->ds3231_dev = hi2c1_p;
  
// }

void DS3231::ds3231_init(){
  this->ds3231_dev = &hi2c1;
  
}

void DS3231::set_day(uint8_t val){
    uint8_t temp = (((val/10)<<4) | (val%10)); 
    DS3231_SetRegByte(DATE_ADDR, temp);
}
void DS3231::set_month(uint8_t val){
    uint8_t temp = (((val/10)<<4) | (val%10)); 
    DS3231_SetRegByte(MON_ADDR, temp);
}
void DS3231::set_year(uint8_t val){
    uint8_t temp = (((val/10)<<4) | (val%10)); 
    DS3231_SetRegByte(YEAR_ADDR, temp);
}

void DS3231::set_sec(uint8_t val){
    uint8_t temp = (((val/10)<<4) | (val%10)); 
    DS3231_SetRegByte(SEC_ADDR, temp);
}
void DS3231::set_min(uint8_t val){
    uint8_t temp = (((val/10)<<4) | (val%10)); 
    DS3231_SetRegByte(MIN_ADDR, temp);
}
void DS3231::set_hour(uint8_t val){
    uint8_t temp = (((val/10)<<4) | (val%10)); 
    DS3231_SetRegByte(HOUR_ADDR, temp);
}

uint8_t DS3231::get_day(){
    uint8_t temp  = DS3231_GetRegByte(DATE_ADDR);
    return ((((temp & 0xf0)>>4)*10) + (temp&0xf));
}

uint8_t DS3231::get_month(){
    uint8_t temp  = DS3231_GetRegByte(MON_ADDR);
    return ((((temp & 0xf0)>>4)*10) + (temp&0xf));
}

uint8_t DS3231::get_year(){
    uint8_t temp  = DS3231_GetRegByte(YEAR_ADDR);
    return ((((temp & 0xf0)>>4)*10) + (temp&0xf));
}

uint8_t DS3231::get_sec(){
    uint8_t temp  = DS3231_GetRegByte(SEC_ADDR);
    return ((((temp & 0xf0)>>4)*10) + (temp&0xf));
}

uint8_t DS3231::get_min(){
    uint8_t temp  = DS3231_GetRegByte(MIN_ADDR);
    return ((((temp & 0xf0)>>4)*10) + (temp&0xf));
}

uint8_t DS3231::get_hour(){
    uint8_t temp  = DS3231_GetRegByte(HOUR_ADDR);
    return ((((temp & 0xf0)>>4)*10) + (temp&0xf));
}

