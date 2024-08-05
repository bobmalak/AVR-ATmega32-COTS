# AVR-ATmega32_COTS Repository

This repository contains a comprehensive collection of modules and drivers for the AVR-ATmega32 Microcontroller. It is organized into four main layers: MCAL, HAL, LIB, and APP. Each layer provides specific functionalities, from low-level hardware interactions to high-level application logic.

## 1. MCAL (Microcontroller Abstraction Layer)
The MCAL layer provides low-level drivers and services that directly interact with the hardware. It includes the following modules:

1. **DIO**: Digital Input/Output driver for handling digital pins.
2. **PORT**: Port driver for configuring and controlling the ports.
3. **EXTI**: External Interrupt driver for handling external interrupts.
4. **GIE**: Global Interrupt Enable driver for enabling and disabling global interrupts.
5. **ADC**: Analog to Digital Converter driver for reading analog values.
6. **TIMER**: Timer driver for handling timer operations.
7. **WATCHDOG**: Watchdog timer driver to reset the microcontroller in case of malfunction.
8. **USART**: Universal Synchronous/Asynchronous Receiver/Transmitter driver for serial communication.
9. **SPI**: Serial Peripheral Interface driver for SPI communication.
10. **TWI**: Two Wire Interface (I2C) driver for I2C communication.

## 2. HAL (Hardware Abstraction Layer)
The HAL layer provides higher-level drivers that abstract the hardware details and provide easier access to peripheral functionalities. It includes the following components:

1. **SSD**: Seven Segment Display driver for controlling 7-segment displays.
2. **LED**: Light Emitting Diode driver for controlling LEDs.
3. **SW**: Switches driver for reading switch states.
4. **CLCD**: Character LCD driver for controlling character LCD displays.
5. **KEYPAD**: Keypad driver for interfacing with keypads.
6. **DC_MOTOR**: DC Motor driver for controlling DC motors.
7. **STEPPER**: Stepper Motor driver for controlling stepper motors.
8. **DAC**: Digital to Analog Converter driver for generating analog signals.
9. **THERMISTOR**: Thermistor driver for reading temperature values from a thermistor.
10. **SERVO**: Servo Motor driver for controlling servo motors.
11. **EEPROM**: Electrically Erasable Programmable Read-Only Memory driver for reading and writing to EEPROM.

## 3. LIB (Library)
The LIB layer includes utility libraries that provide common functionalities and helper functions to be used across different modules. This includes:

1. **Bitmath**: Bit manipulation utilities.
2. **Standard Types**: Definitions of standard data types for consistency.

## 4. APP (Application)
The APP layer contains application-level code that utilizes the services provided by the MCAL and HAL layers to implement specific functionalities and projects.

## Getting Started
To get started with this repository, clone it to your local machine using the following command:
```sh
git clone https://github.com/yourusername/AVR-ATmega32_COTS.git
