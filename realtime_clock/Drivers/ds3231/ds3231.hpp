/*
 * ds3231.hpp
 *
 *  Created on: Sep 17, 2024
 *      Author: LeDuyAnh
 */

#ifndef DS3231_DS3231_HPP_
#define DS3231_DS3231_HPP_

#define DS3231_TIMEOUT		HAL_MAX_DELAY

typedef struct
{
    uint8_t hour;
    uint8_t min;
    uint8_t sec;
}ds3231_time;



class ds3231
{

public:
    // ds3231(/* args */);
    // ~ds3231();

    struct Data_Time
    {
        uint8_t hour;
        uint8_t min;
        uint8_t sec;
    };
    
    void ds3231_init(I2C_HandleTypeDef *hi2c1);
    void DS3231_GetTemp();
    void DS3231_SetRegByte(uint8_t regAddr, uint8_t val);
    uint8_t DS3231_GetRegByte(uint8_t regAddr);
private:
    Data_Time ds3231_time_cl;
    float temp;
    I2C_HandleTypeDef *ds3231_dev;
    
};

// ds3231::ds3231(/* args */)
// {
// }

// ds3231::~ds3231()
// {
// }




#endif /* DS3231_DS3231_HPP_ */
