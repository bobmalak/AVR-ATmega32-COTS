/*********************************************************************************/
/*********************************************************************************/
/*********************    Author:   Abanob Malak     *****************************/
/*********************    Layer:    HAL              *****************************/
/*********************    SWC:      STPR             *****************************/
/*********************    Version:  1.00             *****************************/
/*********************************************************************************/
/*********************************************************************************/
#ifndef STPR_INTERFACE_H_
#define STPR_INTERFACE_H_

#define STPR_CLOCKWISE					0
#define STPR_COUNTER_CLOCKWISE			1

/************************************************************************************************/
/* Function Name  : STPR_voidRotateClockwise                                                    */
/* Description    : Rotate the stepper motor in the clockwise direction.                        */
/* Fun. Argument1 : None                                                                        */
/* Fun. Return    : None                                                                        */
/************************************************************************************************/
void STPR_voidRotateClockwise(void);


/************************************************************************************************/
/* Function Name  : STPR_voidRotateCounterClockwise                                             */
/* Description    : Rotate the stepper motor in the counter-clockwise direction.                */
/* Fun. Argument1 : None                                                                        */
/* Fun. Return    : None                                                                        */
/************************************************************************************************/
void STPR_voidRotateCounterClockwise(void);


/************************************************************************************************************/
/* Function Name  : STPR_voidRotateAngle                                                                    */
/* Description    : Rotate the stepper motor to a specified angle in the given direction.                   */
/* Fun. Argument1 : u8 Copy_u8Direction   Direction of rotation (STPR_CLOCKWISE or STPR_COUNTER_CLOCKWISE). */
/* Fun. Argument2 : u32 Copy_u8Angle      Angle to rotate (in degrees or steps depending on implementation).*/
/* Fun. Return    : None                                                                                    */
/************************************************************************************************************/
void STPR_voidRotateAngle(u8 Copy_u8Direction, u32 Copy_u8Angle);


#endif
