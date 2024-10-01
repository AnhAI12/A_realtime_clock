################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ThirdPart/FreeRTOS/croutine.c \
../ThirdPart/FreeRTOS/event_groups.c \
../ThirdPart/FreeRTOS/list.c \
../ThirdPart/FreeRTOS/queue.c \
../ThirdPart/FreeRTOS/stream_buffer.c \
../ThirdPart/FreeRTOS/tasks.c \
../ThirdPart/FreeRTOS/timers.c 

OBJS += \
./ThirdPart/FreeRTOS/croutine.o \
./ThirdPart/FreeRTOS/event_groups.o \
./ThirdPart/FreeRTOS/list.o \
./ThirdPart/FreeRTOS/queue.o \
./ThirdPart/FreeRTOS/stream_buffer.o \
./ThirdPart/FreeRTOS/tasks.o \
./ThirdPart/FreeRTOS/timers.o 

C_DEPS += \
./ThirdPart/FreeRTOS/croutine.d \
./ThirdPart/FreeRTOS/event_groups.d \
./ThirdPart/FreeRTOS/list.d \
./ThirdPart/FreeRTOS/queue.d \
./ThirdPart/FreeRTOS/stream_buffer.d \
./ThirdPart/FreeRTOS/tasks.d \
./ThirdPart/FreeRTOS/timers.d 


# Each subdirectory must supply rules for building sources it contributes
ThirdPart/FreeRTOS/%.o ThirdPart/FreeRTOS/%.su: ../ThirdPart/FreeRTOS/%.c ThirdPart/FreeRTOS/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F407xx -c -I../USB_HOST/App -I"D:/17_Project/1.a_clock/A_realtime_clock/test_itm/ThirdPart/FreeRTOS" -I"D:/17_Project/1.a_clock/A_realtime_clock/test_itm/ThirdPart/FreeRTOS/include" -I"D:/17_Project/1.a_clock/A_realtime_clock/test_itm/ThirdPart/FreeRTOS/portable/GCC/ARM_CM4F" -I../USB_HOST/Target -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Middlewares/ST/STM32_USB_Host_Library/Core/Inc -I../Middlewares/ST/STM32_USB_Host_Library/Class/CDC/Inc -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-ThirdPart-2f-FreeRTOS

clean-ThirdPart-2f-FreeRTOS:
	-$(RM) ./ThirdPart/FreeRTOS/croutine.d ./ThirdPart/FreeRTOS/croutine.o ./ThirdPart/FreeRTOS/croutine.su ./ThirdPart/FreeRTOS/event_groups.d ./ThirdPart/FreeRTOS/event_groups.o ./ThirdPart/FreeRTOS/event_groups.su ./ThirdPart/FreeRTOS/list.d ./ThirdPart/FreeRTOS/list.o ./ThirdPart/FreeRTOS/list.su ./ThirdPart/FreeRTOS/queue.d ./ThirdPart/FreeRTOS/queue.o ./ThirdPart/FreeRTOS/queue.su ./ThirdPart/FreeRTOS/stream_buffer.d ./ThirdPart/FreeRTOS/stream_buffer.o ./ThirdPart/FreeRTOS/stream_buffer.su ./ThirdPart/FreeRTOS/tasks.d ./ThirdPart/FreeRTOS/tasks.o ./ThirdPart/FreeRTOS/tasks.su ./ThirdPart/FreeRTOS/timers.d ./ThirdPart/FreeRTOS/timers.o ./ThirdPart/FreeRTOS/timers.su

.PHONY: clean-ThirdPart-2f-FreeRTOS

