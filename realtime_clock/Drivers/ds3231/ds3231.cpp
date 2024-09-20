
/*
 * ds3231.cpp
 *
 *  Created on: Sep 17, 2024
 *      Author: LeDuyAnh
 */

#include "ds3231.hpp"


uint8_t ds3231::DS3231_GetRegByte(uint8_t regAddr) {
	uint8_t val;                          //must shift 1 bit, requires by HAL I2C
	HAL_I2C_Master_Transmit(ds3231_dev, DS3231_ADDR << 1, &regAddr, 1, DS3231_TIMEOUT);
	HAL_I2C_Master_Receive(ds3231_dev, DS3231_ADDR << 1, &val, 1, DS3231_TIMEOUT);
  // HAL_I2C_Mem_Write (ds3231_dev, DS3231_ADDR << 1, regAddr, I2C_MEMADD_SIZE_8BIT, uint8_t * pData, uint16_t Size, uint32_t Timeout);
	return val;
}

void ds3231::DS3231_SetRegByte(uint8_t regAddr, uint8_t val) {
	uint8_t bytes[2] = { regAddr, val };
	HAL_I2C_Master_Transmit(ds3231_dev, DS3231_ADDR << 1, bytes, 2, DS3231_TIMEOUT);
  // HAL_I2C_Mem_Write (ds3231_dev, DS3231_ADDR << 1, regAddr, I2C_MEMADD_SIZE_8BIT, uint8_t * pData, uint16_t Size, uint32_t Timeout);
}

std::uint8_t ds3231::DS3231_GetTemp(){
  std::uint8_t val, val1, val2;
  val1 = DS3231_GetRegByte(TEMP_UPPER);
  val2 = DS3231_GetRegByte(TEMP_LOWER) >> 6;
  val = val1 + val2*0.25f
  return val;
}

void ds3231::ds3231_init(I2C_HandleTypeDef *hi2c1){
  this->ds3231_dev = hi2c1;
  
}

void ds3231::set_day(std::uint8_t val){
    std::uint8_t temp = (((val/10)<<4) | (val%10)); 
    DS3231_SetRegByte(DATE_ADDR, temp);
}
void ds3231::set_month(std::uint8_t val){
    std::uint8_t temp = (((val/10)<<4) | (val%10)); 
    DS3231_SetRegByte(MON_ADDR, temp);
}
void ds3231::set_year(std::uint8_t val){
    std::uint8_t temp = (((val/10)<<4) | (val%10)); 
    DS3231_SetRegByte(YEAR_ADDR, temp);
}

void ds3231::set_sec(std::uint8_t val){
    std::uint8_t temp = (((val/10)<<4) | (val%10)); 
    DS3231_SetRegByte(SEC_ADDR, temp);
}
void ds3231::set_min(std::uint8_t val){
    std::uint8_t temp = (((val/10)<<4) | (val%10)); 
    DS3231_SetRegByte(MIN_ADDR, temp);
}
void ds3231::set_hour(std::uint8_t val){
    std::uint8_t temp = (((val/10)<<4) | (val%10)); 
    DS3231_SetRegByte(HOUR_ADDR, temp);
}

std::uint8_t get_day(){
    std::uint8_t temp  = DS3231_GetRegByte(DATE_ADDR);
    return ((((temp & 0xf0)>>4)*10) + (temp&0xf));
}

std::uint8_t get_month(){
    std::uint8_t temp = (((val/10)<<4) | (val%10)); 
    DS3231_SetRegByte(HOUR_ADDR, temp);
}

std::uint8_t get_year();{
    std::uint8_t temp = (((val/10)<<4) | (val%10)); 
    DS3231_SetRegByte(HOUR_ADDR, temp);
}

std::uint8_t get_sec(){
    std::uint8_t temp = (((val/10)<<4) | (val%10)); 
    DS3231_SetRegByte(HOUR_ADDR, temp);
}

std::uint8_t get_min(){
    std::uint8_t temp = (((val/10)<<4) | (val%10)); 
    DS3231_SetRegByte(HOUR_ADDR, temp);
}

std::uint8_t get_hour(){
    std::uint8_t temp = (((val/10)<<4) | (val%10)); 
    DS3231_SetRegByte(HOUR_ADDR, temp);
}
