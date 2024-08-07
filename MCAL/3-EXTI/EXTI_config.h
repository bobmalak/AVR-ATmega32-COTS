/*********************************************************************************/
/*********************************************************************************/
/*********************    Author:   Abanob Malak     *****************************/
/*********************    Layer:    MCAL             *****************************/
/*********************    SWC:      EXTI             *****************************/
/*********************    Version:  1.00             *****************************/
/*********************************************************************************/
/*********************************************************************************/

#ifndef EXTI_CONFIG_H_
#define EXTI_CONFIG_H_

/* Options for INT0 and INT1 Sense Control:
 * 1- LOW_LEVEL
 * 2- ON_CHANGE
 * 3- FALLING_EDGE
 * 4- RISING_EDGE
 */
#define INT0_SENSE 			FALLING_EDGE
#define INT1_SENSE 			FALLING_EDGE

/* Options for INT2 Sense Control:
 * 1- FALLING_EDGE
 * 2- RISING_EDGE
 */
#define INT2_SENSE 			RISING_EDGE

/* Options for Initial State of External Interrupts:
 * 1- ENABLED
 * 2- DISABLED
 */
#define INT0_INITIAL_STATE 	ENABLED
#define INT1_INITIAL_STATE	ENABLED
#define INT2_INITIAL_STATE 	DISABLED

#endif
