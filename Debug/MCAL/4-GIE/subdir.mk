################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCAL/4-GIE/GIE_program.c 

OBJS += \
./MCAL/4-GIE/GIE_program.o 

C_DEPS += \
./MCAL/4-GIE/GIE_program.d 


# Each subdirectory must supply rules for building sources it contributes
MCAL/4-GIE/%.o: ../MCAL/4-GIE/%.c MCAL/4-GIE/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega16 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


