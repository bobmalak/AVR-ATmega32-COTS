/*********************************************************************************/
/*********************************************************************************/
/*********************    Author:   Abanob Malak     *****************************/
/*********************    Layer:    HAl              *****************************/
/*********************    SWC:      SERVO            *****************************/
/*********************    Version:  1.00             *****************************/
/*********************************************************************************/
/*********************************************************************************/
#include "../../LIB/STD_TYPES.h"
#include "../../LIB/MATH_HELPER.h"

#include "../../MCAL/6-TIMER/TIMER_interface.h"

u8 SERVO_u8Rotate(u8 Copy_u8Degree,Timer1_t* Copy_psTimer){
	u8 Local_u8ErrorState;
	if(Copy_psTimer!=NULL){
		u16 Local_u16OnTime=MATH_s32Map(0,180,400,2657,Copy_u8Degree);
		TIMER1_u8PWMGenerate(Copy_psTimer,20000,Local_u16OnTime);
	}
	else{
		Local_u8ErrorState=NULL_PTR;
	}
	return Local_u8ErrorState;
}




