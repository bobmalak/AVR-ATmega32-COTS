/*********************************************************************************/
/*********************************************************************************/
/*********************    Author:   Abanob Malak     *****************************/
/*********************    Layer:    HAL              *****************************/
/*********************    SWC:      LED              *****************************/
/*********************    Version:  1.00             *****************************/
/*********************************************************************************/
/*********************************************************************************/
#ifndef LED_INTERFACE_H_
#define LED_INTERFACE_H_

#define SOURCE			1
#define SINK 			0

typedef struct led{
	u8 CONN_TYPE;
	u8 Port;
	u8 Pin;
}LED_t;


/*****************************************************************************************************/
/* Function Name : LED_u8TurnOn                                                                      */
/* Description   : Turn on the LED by setting the appropriate pin value based on its connection type.*/
/* Fun. Argument1: LED {Pointer to the LED_t structure containing LED configuration}                 */
/* Fun. Return   : u8 {0 if successful, 1 if error occurs}                                           */
/*****************************************************************************************************/
u8 LED_u8TurnOn(LED_t* LED);

/******************************************************************************************************/
/* Function Name : LED_u8TurnOff                                                                      */
/* Description 	 : Turn off the LED by setting the appropriate pin value based on its connection type.*/
/* Fun. Argument1: LED {Pointer to the LED_t structure containing LED configuration}                  */
/* Fun. Return 	 : u8 {0 if successful, 1 if error occurs}                                            */
/******************************************************************************************************/
u8 LED_u8TurnOff(LED_t* LED);



#endif

