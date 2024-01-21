################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/FastBitEmbedded_Implementation.c \
../Src/syscalls.c \
../Src/sysmem.c 

OBJS += \
./Src/FastBitEmbedded_Implementation.o \
./Src/syscalls.o \
./Src/sysmem.o 

C_DEPS += \
./Src/FastBitEmbedded_Implementation.d \
./Src/syscalls.d \
./Src/sysmem.d 


# Each subdirectory must supply rules for building sources it contributes
Src/%.o Src/%.su Src/%.cyclo: ../Src/%.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -c -I"/Users/mariestahaab/Documents/GitHub/CortexMxProgramming/Workspace/Target/taskScheduler/Scheduler_RoundRobin/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Src

clean-Src:
	-$(RM) ./Src/FastBitEmbedded_Implementation.cyclo ./Src/FastBitEmbedded_Implementation.d ./Src/FastBitEmbedded_Implementation.o ./Src/FastBitEmbedded_Implementation.su ./Src/syscalls.cyclo ./Src/syscalls.d ./Src/syscalls.o ./Src/syscalls.su ./Src/sysmem.cyclo ./Src/sysmem.d ./Src/sysmem.o ./Src/sysmem.su

.PHONY: clean-Src

