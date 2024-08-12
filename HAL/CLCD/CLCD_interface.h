/*********************************************************************************/
/*********************************************************************************/
/*********************    Author:   Abanob Malak     *****************************/
/*********************    Layer:    HAl              *****************************/
/*********************    SWC:      CLCD             *****************************/
/*********************    Version:  1.00             *****************************/
/*********************************************************************************/
/*********************************************************************************/
#ifndef HAL_CLCD_H_
#define HAL_CLCD_H_


/**************************************************************************************************/
/* Function Name : CLCD_voidSendCommand                                                           */
/* Description 	 : Send a command to the LCD. This could be any instruction like clearing display,*/
/*                setting cursor position, etc.                                                   */
/* Fun. Argument1: Copy_u8Command {Command value to be sent to LCD}                               */
/* Fun. Return 	 : void                                                                           */
/**************************************************************************************************/
void CLCD_voidSendCommand(u8 Copy_u8Command);


/************************************************************************************************/
/* Function Name : CLCD_voidSendData                                                            */
/* Description 	 : Send a single character (data) to the LCD.                                   */
/* Fun. Argument1: Copy_u8Data {Character to be displayed on the LCD}                           */
/* Fun. Return 	 : void                                                                         */
/************************************************************************************************/
void CLCD_voidSendData(u8 Copy_u8Data);

/************************************************************************************************/
/* Function Name : CLCD_voidInit                                                                */
/* Description 	 : Initialize the LCD by sending the necessary commands to set up the display.  */
/* Fun. Argument : None                                                                         */
/* Fun. Return 	 : void                                                                         */
/************************************************************************************************/
void CLCD_voidInit(void);

/************************************************************************************************/
/* Function Name : CLCD_voidSendString                                                          */
/* Description 	 : Send a string of characters to be displayed on the LCD.                      */
/* Fun. Argument1: Copy_pcString {Pointer to the null-terminated string to be displayed}        */
/* Fun. Return 	 : void                                                                         */
/************************************************************************************************/
void CLCD_voidSendString();

/************************************************************************************************/
/* Function Name : CLCD_voidGoToXY                                                              */
/* Description	 : Set the cursor to a specific location on the LCD.                            */
/* Fun. Argument1: Copy_u8XPos {Row position, 0 for first row, 1 for second row}                */
/* Fun. Argument2: Copy_u8YPos {Column position, ranging from 0 to 15}                          */
/* Fun. Return 	 : void                                                                         */
/************************************************************************************************/
void CLCD_voidGoToXY(u8 Copy_u8XPos,u8 Copy_u8YPos);


/************************************************************************************************/
/* Function Name : CLCD_voidWriteSpecialCharacter                                                */
/* Description : Write a custom character pattern to the CGRAM and display it at the specified   */
/*                location on the LCD.                                                           */
/* Fun. Argument1: Copy_pu8Pattern {Pointer to the array of 8 bytes representing the custom char}*/
/* Fun. Argument2: Copy_u8PatternNumber {Pattern number (0-7) for selecting CGRAM address}       */
/* Fun. Argument3: Copy_u8XPos {Row position to display the custom character}                    */
/* Fun. Argument4: Copy_u8YPos {Column position to display the custom character}                 */
/* Fun. Return : void                                                                            */
/************************************************************************************************/
void CLCD_voidWriteSpecialCharacter(u8* Copy_pu8Pattern, u8 Copy_u8PatternNumber, u8 Copy_u8XPos,u8 Copy_u8YPos );

#endif

