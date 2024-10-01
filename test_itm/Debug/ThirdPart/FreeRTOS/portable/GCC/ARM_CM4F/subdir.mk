################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ThirdPart/FreeRTOS/portable/GCC/ARM_CM4F/port.c 

OBJS += \
./ThirdPart/FreeRTOS/portable/GCC/ARM_CM4F/port.o 

C_DEPS += \
./ThirdPart/FreeRTOS/portable/GCC/ARM_CM4F/port.d 


# Each subdirectory must supply rules for building sources it contributes
ThirdPart/FreeRTOS/portable/GCC/ARM_CM4F/%.o ThirdPart/FreeRTOS/portable/GCC/ARM_CM4F/%.su: ../ThirdPart/FreeRTOS/portable/GCC/ARM_CM4F/%.c ThirdPart/FreeRTOS/portable/GCC/ARM_CM4F/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F407xx -c -I../USB_HOST/App -I"D:/17_Project/1.a_clock/A_realtime_clock/test_itm/ThirdPart/FreeRTOS" -I"D:/17_Project/1.a_clock/A_realtime_clock/test_itm/ThirdPart/FreeRTOS/include" -I"D:/17_Project/1.a_clock/A_realtime_clock/test_itm/ThirdPart/FreeRTOS/portable/GCC/ARM_CM4F" -I../USB_HOST/Target -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Middlewares/ST/STM32_USB_Host_Library/Core/Inc -I../Middlewares/ST/STM32_USB_Host_Library/Class/CDC/Inc -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-ThirdPart-2f-FreeRTOS-2f-portable-2f-GCC-2f-ARM_CM4F

clean-ThirdPart-2f-FreeRTOS-2f-portable-2f-GCC-2f-ARM_CM4F:
	-$(RM) ./ThirdPart/FreeRTOS/portable/GCC/ARM_CM4F/port.d ./ThirdPart/FreeRTOS/portable/GCC/ARM_CM4F/port.o ./ThirdPart/FreeRTOS/portable/GCC/ARM_CM4F/port.su

.PHONY: clean-ThirdPart-2f-FreeRTOS-2f-portable-2f-GCC-2f-ARM_CM4F

