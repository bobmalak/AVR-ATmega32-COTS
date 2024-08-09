/*********************************************************************************/
/*********************************************************************************/
/*********************    Author:   Abanob Malak     *****************************/
/*********************    Layer:    HAl              *****************************/
/*********************    SWC:      DCM              *****************************/
/*********************    Version:  1.00             *****************************/
/*********************************************************************************/
/*********************************************************************************/


#include "../../LIB/STD_TYPES.h"

#include <util/delay.h>

#include "../../MCAL/1-DIO/DIO_Interface.h"

#include "DCM_config.h"
#include "DCM_private.h"
#include "DCM_Interface.h"

void DCM_voidRotateClockwise(){
	DIO_u8SetPinValue(DCM_PORT,DCM_CTR_CLKWISE_PIN,DIO_u8PIN_LOW);
	DIO_u8SetPinValue(DCM_PORT,DCM_CLKWISE_PIN,DIO_u8PIN_HIGH);
}
void DCM_voidRotateCounterClockwise(){
	DIO_u8SetPinValue(DCM_PORT,DCM_CLKWISE_PIN,DIO_u8PIN_LOW);
	DIO_u8SetPinValue(DCM_PORT,DCM_CTR_CLKWISE_PIN,DIO_u8PIN_HIGH);
}

void DCM_voidStop(){
		DIO_u8SetPinValue(DCM_PORT,DCM_CLKWISE_PIN,DIO_u8PIN_LOW);
	DIO_u8SetPinValue(DCM_PORT,DCM_CTR_CLKWISE_PIN,DIO_u8PIN_LOW);
}
