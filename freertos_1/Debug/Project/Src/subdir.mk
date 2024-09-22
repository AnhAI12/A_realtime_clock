################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Project/Src/alt_main.cpp 

OBJS += \
./Project/Src/alt_main.o 

CPP_DEPS += \
./Project/Src/alt_main.d 


# Each subdirectory must supply rules for building sources it contributes
Project/Src/%.o Project/Src/%.su: ../Project/Src/%.cpp Project/Src/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F407xx -c -I"D:/17_Project/1.a_clock/A_realtime_clock/freertos_1/Project/Inc" -I../USB_HOST/App -I../USB_HOST/Target -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Middlewares/ST/STM32_USB_Host_Library/Core/Inc -I../Middlewares/ST/STM32_USB_Host_Library/Class/CDC/Inc -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"D:/17_Project/1.a_clock/A_realtime_clock/freertos_1/Project" -I"D:/17_Project/1.a_clock/A_realtime_clock/freertos_1/Lib" -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Project-2f-Src

clean-Project-2f-Src:
	-$(RM) ./Project/Src/alt_main.d ./Project/Src/alt_main.o ./Project/Src/alt_main.su

.PHONY: clean-Project-2f-Src

