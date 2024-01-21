################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Scheduler_RoundRobin/Src/Scheduler_SysTick.c \
../Scheduler_RoundRobin/Src/TaskHandlers.c \
../Scheduler_RoundRobin/Src/TaskStackConfig.c 

OBJS += \
./Scheduler_RoundRobin/Src/Scheduler_SysTick.o \
./Scheduler_RoundRobin/Src/TaskHandlers.o \
./Scheduler_RoundRobin/Src/TaskStackConfig.o 

C_DEPS += \
./Scheduler_RoundRobin/Src/Scheduler_SysTick.d \
./Scheduler_RoundRobin/Src/TaskHandlers.d \
./Scheduler_RoundRobin/Src/TaskStackConfig.d 


# Each subdirectory must supply rules for building sources it contributes
Scheduler_RoundRobin/Src/%.o Scheduler_RoundRobin/Src/%.su Scheduler_RoundRobin/Src/%.cyclo: ../Scheduler_RoundRobin/Src/%.c Scheduler_RoundRobin/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -c -I"/Users/mariestahaab/Documents/GitHub/CortexMxProgramming/Workspace/Target/taskScheduler/Scheduler_RoundRobin/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Scheduler_RoundRobin-2f-Src

clean-Scheduler_RoundRobin-2f-Src:
	-$(RM) ./Scheduler_RoundRobin/Src/Scheduler_SysTick.cyclo ./Scheduler_RoundRobin/Src/Scheduler_SysTick.d ./Scheduler_RoundRobin/Src/Scheduler_SysTick.o ./Scheduler_RoundRobin/Src/Scheduler_SysTick.su ./Scheduler_RoundRobin/Src/TaskHandlers.cyclo ./Scheduler_RoundRobin/Src/TaskHandlers.d ./Scheduler_RoundRobin/Src/TaskHandlers.o ./Scheduler_RoundRobin/Src/TaskHandlers.su ./Scheduler_RoundRobin/Src/TaskStackConfig.cyclo ./Scheduler_RoundRobin/Src/TaskStackConfig.d ./Scheduler_RoundRobin/Src/TaskStackConfig.o ./Scheduler_RoundRobin/Src/TaskStackConfig.su

.PHONY: clean-Scheduler_RoundRobin-2f-Src

