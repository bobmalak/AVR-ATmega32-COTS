/*********************************************************************************/
/*********************************************************************************/
/*********************    Author:   Abanob Malak     *****************************/
/*********************    Layer:    HAl              *****************************/
/*********************    SWC:      DCM              *****************************/
/*********************    Version:  1.00             *****************************/
/*********************************************************************************/
/*********************************************************************************/

#ifndef DCM_INTERFACE_H_
#define DCM_INTERFACE_H_

/************************************************************************************************/
/* Function Name : DCM_voidRotateClockwise                                                       */
/* Description 	 : Rotate the DC motor clockwise by setting the appropriate control pins.        */
/* Fun. Argument : None                                                                          */
/* Fun. Return 	 : void                                                                          */
/************************************************************************************************/
void DCM_voidRotateClockwise();


/************************************************************************************************/
/* Function Name : DCM_voidRotateCounterClockwise                                               */
/* Description 	 : Rotate the DC motor counterclockwise by setting the appropriate control pins */
/* Fun. Argument : None                                                                         */
/* Fun. Return	  : void                                                                         */
/************************************************************************************************/
void DCM_voidRotateCounterClockwise();

/************************************************************************************************/
/* Function Name : DCM_voidStop                                                                  */
/* Description 	 : Stop the DC motor by setting both control pins to LOW.                        */
/* Fun. Argument : None                                                                          */
/* Fun. Return 	 : void                                                                          */
/************************************************************************************************/
void DCM_voidStop();
#endif
