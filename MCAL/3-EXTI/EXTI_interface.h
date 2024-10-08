/*********************************************************************************/
/*********************************************************************************/
/*********************    Author:   Abanob Malak     *****************************/
/*********************    Layer:    MCAL             *****************************/
/*********************    SWC:      EXTI             *****************************/
/*********************    Version:  1.00             *****************************/
/*********************************************************************************/
/*********************************************************************************/
#ifndef EXTI_INTERFACE_H_
#define EXTI_INTERFACE_H_

#define EXTI_LOW_LEVEL			1
#define EXTI_ON_CHANGE			2
#define	EXTI_FALLING_EDGE		3
#define EXTI_RISING_EDGE		4

#define EXTI_INT0				1
#define EXTI_INT1				2
#define EXTI_INT2				3

#define EXTI_ENABLE				1
#define EXTI_DISABLE			2

void EXTI_voidInt0Init(void);

void EXTI_voidInt1Init(void);

void EXTI_voidInt2Init(void);


/*Description: A function that sets the control sense for any of the three external interrupt pins using post build configuration
  Input: Copy_u8Interrupt, options are: 1- EXTI_INT0
										2- EXTI_INT1
										3- EXTI_INT2

 	 Copy_u8Sense, options are:  	1- EXTI_LOW_LEVEL
									2- EXTI_ON_CHANGE
									3- EXTI_FALLING_EDGE
									4- EXTI_RISING_EDGE

Output: Error status with type u8
 */
u8 EXTI_u8SetSenseControl(u8 Copy_u8Interrupt, u8 Copy_u8Sense);


/*Description: A function that enables or disables any of the three external interrupt pins using post build configuration
  Input: Copy_u8Interrupt, options are: 1- EXTI_INT0
										2- EXTI_INT1
										3- EXTI_INT2

 	 	Copy_u8Sense, options are:		1- EXTI_ENABLE
										2- EXTI_DISABLE

Output: Error status with type u8
 */
/*****************************************************************************************************/
/* Function Name : EXTI_u8SetSenseControl                                                            */
/* Description   : Sets the control sense for any of the three external interrupt pins.              */
/*                This function allows setting the sense control (e.g., low level, on change,        */
/*                falling edge, rising edge) for a specified external interrupt pin.                 */
/* Fun. Argument1: Copy_u8Interrupt {EXTI_INT0, EXTI_INT1, EXTI_INT2}                                */
/*                {Specifies which external interrupt to configure.}                                 */
/* Fun. Argument2: Copy_u8Sense {EXTI_LOW_LEVEL, EXTI_ON_CHANGE, EXTI_FALLING_EDGE, EXTI_RISING_EDGE}*/
/*                {Specifies the sensing control option for the external interrupt.}                 */
/* Fun. Return   : u8 {OK if successful, NOT_OK if an invalid argument is provided}                  */
/*****************************************************************************************************/
u8 EXTI_u8SetInterruptStatus(u8 Copy_u8Interrupt, u8 Copy_u8Status);


/***************************************************************************************************/
/* Function Name : EXTI_u8Int0SetCallBack                                                          */
/* Description   : Sets the callback function for the INT0 external interrupt.                     */
/*                This function registers a user-defined function to be called when INT0 occurs.   */
/* Fun. Argument : Copy_pvInt0Func {Pointer to the callback function}                              */
/*                {Specifies the function to be called on INT0 interrupt.}                         */
/* Fun. Return   : u8 {OK if successful, NOT_OK if the pointer is NULL}                            */
/***************************************************************************************************/
u8 EXTI_u8Int0SetCallBack(void(*Copy_pvInt0Func)(void));


/***************************************************************************************************/
/* Function Name : EXTI_u8Int1SetCallBack                                                          */
/* Description   : Sets the callback function for the INT1 external interrupt.                     */
/*                This function registers a user-defined function to be called when INT1 occurs.   */
/* Fun. Argument : Copy_pvInt1Func {Pointer to the callback function}                              */
/*                {Specifies the function to be called on INT1 interrupt.}                         */
/* Fun. Return   : u8 {OK if successful, NOT_OK if the pointer is NULL}                            */
/***************************************************************************************************/
u8 EXTI_u8Int1SetCallBack(void(*Copy_pvInt1Func)(void));


/***************************************************************************************************/
/* Function Name : EXTI_u8Int2SetCallBack                                                          */
/* Description   : Sets the callback function for the INT2 external interrupt.                     */
/*                This function registers a user-defined function to be called when INT2 occurs.   */
/* Fun. Argument : Copy_pvInt2Func {Pointer to the callback function}                              */
/*                {Specifies the function to be called on INT2 interrupt.}                         */
/* Fun. Return   : u8 {OK if successful, NOT_OK if the pointer is NULL}                            */
/***************************************************************************************************/
u8 EXTI_u8Int2SetCallBack(void(*Copy_pvInt2Func)(void));
#endif
