/*********************************************************************************/
/*********************************************************************************/
/*********************    Author:   Abanob Malak     *****************************/
/*********************    Layer:    HAl              *****************************/
/*********************    SWC:      DAC              *****************************/
/*********************    Version:  1.00             *****************************/
/*********************************************************************************/
/*********************************************************************************/
#include "../../LIB/STD_TYPES.h"
#include "../../LIB/MATH_HELPER.h"

#include "../../MCAL/1-DIO/DIO_Interface.h"

#include "DAC_config.h"
#include "DAC_interface.h"
#include "DAC_private.h"

void DAC_voidSetAnalogVolt(u8 Copy_u8Volt){
    u16 Local_u16DigVal=MATH_s32Map(0,DAC_REF_MIL_VOLT,0,MATH_u32Power(2,DAC_RESOLUTION),Copy_u8Volt);
    DIO_u8SetPORTValue(DAC_PORT,Local_u16DigVal);
}
