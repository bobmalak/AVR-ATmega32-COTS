/*********************************************************************************/
/*********************************************************************************/
/*********************    Author:   Abanob Malak     *****************************/
/*********************    File:     MATH_HELPER      *****************************/
/*********************    Version:  1.00             *****************************/
/*********************************************************************************/
/*********************************************************************************/

#ifndef MATH_HELPER_H_
#define MATH_HELPER_H_

/*************************************************************************************************/
/* Function Name : MATH_u32Power                                                                 */
/* Description 	 : Calculate the power of a base number raised to an exponent.                   */
/* Fun. Argument1: Copy_u32Base {Base number}                                                    */
/* Fun. Argument2: Copy_u32Exponent {Exponent value}                                             */
/* Fun. Return	 : u32 {Result of base raised to the exponent}                                   */
/************************************************************************************************/
u32 MATH_u32Power(u32 Copy_u32Base,s32 Copy_u32Exponent);



/*************************************************************************************************/
/* Function Name : MATH_s32Map                                                                   */
/* Description	 : Map an input value from one range to another range.                           */
/* Fun. Argument1: Copy_s32InputMin {Minimum value of the input range}                           */
/* Fun. Argument2: Copy_s32InputMax {Maximum value of the input range}                           */
/* Fun. Argument3: Copy_s32OutputMin {Minimum value of the output range}                         */
/* Fun. Argument4: Copy_s32OutputMax {Maximum value of the output range}                         */
/* Fun. Argument5: Copy_s32InputVal {Value to be mapped}                                         */
/* Fun. Return 	 : s32 {Mapped value in the output range}                                        */
/*************************************************************************************************/
s32 MATH_s32Map(s32 Copy_s32InputMin,s32 Copy_s32InputMax,s32 Copy_s32OutputMin,s32 Copy_s32OutputMax,s32 Copy_s32InputVal);


#endif
