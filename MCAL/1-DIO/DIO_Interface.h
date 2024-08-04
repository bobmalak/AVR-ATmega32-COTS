/*********************************************************************************/
/*********************************************************************************/
/*********************    Author:   Abanob Malak     *****************************/
/*********************    Layer:    MCAL             *****************************/
/*********************    SWC:      DIO              *****************************/
/*********************    Version:  1.00             *****************************/
/*********************************************************************************/
/*********************************************************************************/
/* File Guard by ifndef & endif */
#ifndef DIO_INTERFACE_H
#define DIO_INTERFACE_H

/* Macros as Value options */
#define DIO_u8PIN_HIGH 			1
#define DIO_u8PIN_LOW			0

/* Macros as  PORT Direction as value options */
#define DIO_u8PORT_HIGH		  0Xff
#define DIO_u8PORT_LOW			0

/* Macros as PortNumber options */
#define DIO_u8PORTA 			0
#define DIO_u8PORTB				1
#define DIO_u8PORTC				2
#define DIO_u8PORTD				3

/* Macros as PinNumber options */
#define DIO_u8PIN0				0
#define DIO_u8PIN1				1
#define DIO_u8PIN2				2
#define DIO_u8PIN3				3
#define DIO_u8PIN4				4
#define DIO_u8PIN5				5
#define DIO_u8PIN6				6
#define DIO_u8PIN7				7



u8 DIO_u8SetPinValue(u8 Copy_u8Port, u8 Copy_u8Pin,u8 Copy_u8Value);

u8 DIO_u8SetPORTValue(u8 Copy_u8Port, u8 Copy_u8Direction);

u8 DIO_u8GetPinValue(u8 Copy_u8Port, u8 Copy_u8pin, u8* Copy_pu8Value);

#endif

