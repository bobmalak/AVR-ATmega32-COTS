/*********************************************************************************/
/*********************************************************************************/
/*********************    Author:   Abanob Malak     *****************************/
/*********************    Layer:    HAl              *****************************/
/*********************    SWC:      SERVO            *****************************/
/*********************    Version:  1.00             *****************************/
/*********************************************************************************/
/*********************************************************************************/

#ifndef SERVO_INTERFACE_H_
#define SERVO_INTERFACE_H_

//ChannelID-> 1- CHANNEL_A   2-CHANNEL_B
/************************************************************************************************/
/* Function Name  : SERVO_u8Rotate                                                              */
/* Description    : Rotate the servo motor to a specified angle by generating a PWM signal.     */
/* Fun. Argument1 : u8 Copy_u8Degree  The desired angle to rotate the servo (0 to 180 degrees). */
/* Fun. Argument2 : Timer1_t* Copy_psTimer  Pointer to the Timer1 configuration structure.      */
/* Fun. Return    : u8  Status of the operation (e.g., success or error code).                  */
/************************************************************************************************/
u8 SERVO_u8Rotate(u8 Copy_u8Degree,Timer1_t* Copy_psTimer);



#endif
