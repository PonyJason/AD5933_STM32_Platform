################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/ad5933_driver/AD5933.c 

OBJS += \
./Core/ad5933_driver/AD5933.o 

C_DEPS += \
./Core/ad5933_driver/AD5933.d 


# Each subdirectory must supply rules for building sources it contributes
Core/ad5933_driver/%.o Core/ad5933_driver/%.su: ../Core/ad5933_driver/%.c Core/ad5933_driver/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_FULL_LL_DRIVER -DUSE_HAL_DRIVER -DSTM32F411xE -DSTM32_THREAD_SAFE_STRATEGY=4 -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../Core/ThreadSafe -I../Core/timedelay -I../Core/OLED -I../Core/ad5933_driver -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-ad5933_driver

clean-Core-2f-ad5933_driver:
	-$(RM) ./Core/ad5933_driver/AD5933.d ./Core/ad5933_driver/AD5933.o ./Core/ad5933_driver/AD5933.su

.PHONY: clean-Core-2f-ad5933_driver

