################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Lib/I2C_LCD.c \
../Lib/I2C_LCD_cfg.c \
../Lib/Util.c 

CPP_SRCS += \
../Lib/DS3231.cpp 

C_DEPS += \
./Lib/I2C_LCD.d \
./Lib/I2C_LCD_cfg.d \
./Lib/Util.d 

OBJS += \
./Lib/DS3231.o \
./Lib/I2C_LCD.o \
./Lib/I2C_LCD_cfg.o \
./Lib/Util.o 

CPP_DEPS += \
./Lib/DS3231.d 


# Each subdirectory must supply rules for building sources it contributes
Lib/%.o Lib/%.su: ../Lib/%.cpp Lib/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F407xx -c -I"D:/17_Project/1.a_clock/A_realtime_clock/freertos_1/Project/Inc" -I../USB_HOST/App -I../USB_HOST/Target -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Middlewares/ST/STM32_USB_Host_Library/Core/Inc -I../Middlewares/ST/STM32_USB_Host_Library/Class/CDC/Inc -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"D:/17_Project/1.a_clock/A_realtime_clock/freertos_1/Project" -I"D:/17_Project/1.a_clock/A_realtime_clock/freertos_1/Lib" -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Lib/%.o Lib/%.su: ../Lib/%.c Lib/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F407xx -c -I../USB_HOST/App -I../USB_HOST/Target -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Middlewares/ST/STM32_USB_Host_Library/Core/Inc -I../Middlewares/ST/STM32_USB_Host_Library/Class/CDC/Inc -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"D:/17_Project/1.a_clock/A_realtime_clock/freertos_1/Project/Inc" -I"D:/17_Project/1.a_clock/A_realtime_clock/freertos_1/Lib" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Lib

clean-Lib:
	-$(RM) ./Lib/DS3231.d ./Lib/DS3231.o ./Lib/DS3231.su ./Lib/I2C_LCD.d ./Lib/I2C_LCD.o ./Lib/I2C_LCD.su ./Lib/I2C_LCD_cfg.d ./Lib/I2C_LCD_cfg.o ./Lib/I2C_LCD_cfg.su ./Lib/Util.d ./Lib/Util.o ./Lib/Util.su

.PHONY: clean-Lib

