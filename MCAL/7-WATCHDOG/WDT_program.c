/*********************************************************************************/
/*********************************************************************************/
/*********************    Author:   Abanob Malak     *****************************/
/*********************    Layer:    MCAL             *****************************/
/*********************    SWC:      WDT              *****************************/
/*********************    Version:  1.00             *****************************/
/*********************************************************************************/
/*********************************************************************************/

#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPES.h"

#include "WDT_config.h"
#include "WDT_interface.h"
#include "WDT_private.h"
#include "WDT_register.h"


void WDT_voidSleep(u8 Copy_u8SleepTime){
	//clear prescaler bits
	WDTCR&= PRESCALER_MASK;
	//set required prescaler
	WDTCR|=Copy_u8SleepTime;
}
void WDT_voidEnable(void){
	SET_BIT(WDTCR,WDTCR_WDE);
}
void WDT_voidDisable(void){
	WDTCR|=DISABLE_MASK;

	WDTCR=DISABLE;
}
