################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ECUAL/I2C_LCD/I2C_LCD.c \
../ECUAL/I2C_LCD/I2C_LCD_cfg.c 

C_DEPS += \
./ECUAL/I2C_LCD/I2C_LCD.d \
./ECUAL/I2C_LCD/I2C_LCD_cfg.d 

OBJS += \
./ECUAL/I2C_LCD/I2C_LCD.o \
./ECUAL/I2C_LCD/I2C_LCD_cfg.o 


# Each subdirectory must supply rules for building sources it contributes
ECUAL/I2C_LCD/%.o ECUAL/I2C_LCD/%.su: ../ECUAL/I2C_LCD/%.c ECUAL/I2C_LCD/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F407xx -c -I../USB_HOST/App -I../USB_HOST/Target -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Middlewares/ST/STM32_USB_Host_Library/Core/Inc -I../Middlewares/ST/STM32_USB_Host_Library/Class/CDC/Inc -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"D:/17_Project/1.a_clock/A_realtime_clock/freertos_1/Project/Inc" -I"D:/17_Project/1.a_clock/A_realtime_clock/freertos_1/Lib" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-ECUAL-2f-I2C_LCD

clean-ECUAL-2f-I2C_LCD:
	-$(RM) ./ECUAL/I2C_LCD/I2C_LCD.d ./ECUAL/I2C_LCD/I2C_LCD.o ./ECUAL/I2C_LCD/I2C_LCD.su ./ECUAL/I2C_LCD/I2C_LCD_cfg.d ./ECUAL/I2C_LCD/I2C_LCD_cfg.o ./ECUAL/I2C_LCD/I2C_LCD_cfg.su

.PHONY: clean-ECUAL-2f-I2C_LCD

