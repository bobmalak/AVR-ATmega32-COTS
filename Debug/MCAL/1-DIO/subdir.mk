################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCAL/1-DIO/DIO_Program.c 

OBJS += \
./MCAL/1-DIO/DIO_Program.o 

C_DEPS += \
./MCAL/1-DIO/DIO_Program.d 


# Each subdirectory must supply rules for building sources it contributes
MCAL/1-DIO/%.o: ../MCAL/1-DIO/%.c MCAL/1-DIO/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega16 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


