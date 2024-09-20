/*
 * ds3231.hpp
 *
 *  Created on: Sep 17, 2024
 *      Author: LeDuyAnh
 */

#ifndef DS3231_DS3231_HPP_
#define DS3231_DS3231_HPP_

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

// typedef struct
// {
//     uint8_t hour;
//     uint8_t min;
//     uint8_t sec;
// }ds3231_time;



class ds3231
{

public:
    ds3231(/* args */);
    ~ds3231();

    // struct Data_Time
    // {
    //     uint8_t hour;
    //     uint8_t min;
    //     uint8_t sec;
    // };
    
    void ds3231_init(I2C_HandleTypeDef *hi2c1);
    std::uint8_t DS3231_GetTemp();
    void DS3231_SetRegByte(uint8_t regAddr, uint8_t val);
    std::uint8_t DS3231_GetRegByte(uint8_t regAddr);
    void set_day(std::uint8_t val);
    void set_month(std::uint8_t val);
    void set_year(std::uint8_t val);

    void set_sec(std::uint8_t val);
    void set_min(std::uint8_t val);
    void set_hour(std::uint8_t val);

    std::uint8_t get_day();
    std::uint8_t get_month();
    std::uint8_t get_year();

    std::uint8_t get_sec();
    std::uint8_t get_min();
    std::uint8_t get_hour();
private:
    std::uint8_t hour;
    std::uint8_t min;
    std::uint8_t sec;
    std::uint8_t day;
    std::uint8_t mon;
    std::uint8_t year;
    float temp;
    I2C_HandleTypeDef *ds3231_dev;
    HAL_StatusTypeDef ds3231_stt;
    
};

// ds3231::ds3231(/* args */)
// {
// }

// ds3231::~ds3231()
// {
// }




#endif /* DS3231_DS3231_HPP_ */
