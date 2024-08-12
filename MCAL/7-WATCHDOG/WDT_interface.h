/*********************************************************************************/
/*********************************************************************************/
/*********************    Author:   Abanob Malak     *****************************/
/*********************    Layer:    MCAL             *****************************/
/*********************    SWC:      WDT              *****************************/
/*********************    Version:  1.00             *****************************/
/*********************************************************************************/
/*********************************************************************************/

#ifndef WDT_INTERFACE_H_
#define WDT_INTERFACE_H_

#define SLEEP_16_3_ms			0
#define SLEEP_32_5_ms			1
#define SLEEP_65_ms				2
#define SLEEP_0_13_s			3
#define SLEEP_0_26_s			4
#define SLEEP_0_52_s			5
#define SLEEP_1_s				6
#define SLEEP_2_1_s				7


/************************************************************************************************/
/* Function Name  : WDT_voidSleep                                                               */
/* Description    : Set the Watchdog Timer to generate a sleep period based on the provided     */
/*                   sleep time configuration.                                                  */
/* Fun. Argument1 : u8 Copy_u8SleepTime  Sleep time configuration option from the defined set.  */
/* Fun. Return    : None                                                                        */
/************************************************************************************************/
void WDT_voidSleep(u8 Copy_u8SleepTime);


/************************************************************************************************/
/* Function Name  : WDT_voidEnable                                                              */
/* Description    : Enable the Watchdog Timer.                                                  */
/* Fun. Argument1 : None                                                                        */
/* Fun. Return    : None                                                                        */
/************************************************************************************************/
void WDT_voidEnable(void);


/************************************************************************************************/
/* Function Name  : WDT_voidDisable                                                             */
/* Description    : Disable the Watchdog Timer.                                                 */
/* Fun. Argument1 : None                                                                        */
/* Fun. Return    : None                                                                        */
/************************************************************************************************/
void WDT_voidDisable(void);

#endif
