/*********************************************************************************/
/*********************************************************************************/
/*********************    Author:   Abanob Malak     *****************************/
/*********************    Layer:    HAl              *****************************/
/*********************    SWC:      CLCD             *****************************/
/*********************    Version:  1.00             *****************************/
/*********************************************************************************/
/*********************************************************************************/

#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"
#include <util/delay.h>

#include "../../MCAL/1-DIO/DIO_Interface.h"
#include "CLCD_config.h"
#include "CLCD_interface.h"
#include "CLCD_private.h"


void CLCD_voidSendCommand(u8 Copy_u8Command) {

	DIO_u8SetPinValue(CLCD_CTRL_PORT, CLCD_RS_PIN, DIO_u8PIN_LOW);
	DIO_u8SetPinValue(CLCD_CTRL_PORT, CLCD_RW_PIN, DIO_u8PIN_LOW);
	DIO_u8SetPORTValue(CLCD_DATA_PORT, Copy_u8Command);
	DIO_u8SetPinValue(CLCD_CTRL_PORT, CLCD_E_PIN, DIO_u8PIN_HIGH);
	_delay_ms(2);
	DIO_u8SetPinValue(CLCD_CTRL_PORT, CLCD_E_PIN, DIO_u8PIN_LOW);
}


void CLCD_voidSendData(u8 Copy_u8Data) {

	DIO_u8SetPinValue(CLCD_CTRL_PORT, CLCD_RS_PIN, DIO_u8PIN_HIGH);
	DIO_u8SetPinValue(CLCD_CTRL_PORT, CLCD_RW_PIN, DIO_u8PIN_LOW);
	DIO_u8SetPORTValue(CLCD_DATA_PORT, Copy_u8Data);
	DIO_u8SetPinValue(CLCD_CTRL_PORT, CLCD_E_PIN, DIO_u8PIN_HIGH);
	_delay_ms(2);
	DIO_u8SetPinValue(CLCD_CTRL_PORT, CLCD_E_PIN, DIO_u8PIN_LOW);
}


void CLCD_voidSendString(const char* Copy_pcString) {

	u8 Local_u8Counter = 0;
	while (Copy_pcString[Local_u8Counter] != '\0') {
		CLCD_voidSendData(Copy_pcString[Local_u8Counter]);
		Local_u8Counter++;
	}
}


void CLCD_voidInit(void) {

	_delay_ms(40); // should wait more than 30 ms
	/* function set */
	CLCD_voidSendCommand(0b00111000);

	/* display on/off control */
	CLCD_voidSendCommand(0b00001100);

	/* clear display */
	CLCD_voidSendCommand(0b00000001);
}


void CLCD_voidGoToXY(u8 Copy_u8XPos, u8 Copy_u8YPos) {
	u8 Local_u8Address;

	if (Copy_u8XPos == 0) {
		Local_u8Address = Copy_u8YPos;
	} else if (Copy_u8XPos == 1) {
		Local_u8Address = Copy_u8YPos + 0x40;
	}
	CLCD_voidSendCommand(Local_u8Address + 128);
}

void CLCD_voidWriteSpecialCharacter(u8* Copy_pu8Pattern, u8 Copy_u8PatternNumber, u8 Copy_u8XPos, u8 Copy_u8YPos) {
	u8 Local_u8CGRAMAddress = 0;
	u8 Local_u8Iterator;

	/* calculate CGRAM address, each block is 8 bytes */
	Local_u8CGRAMAddress = Copy_u8PatternNumber * 8;

	/* Send CGRAM Address Command To LCD, With Setting Bit 6 Clearing Bit 7 */
	CLCD_voidSendCommand(Local_u8CGRAMAddress + 64);

	/* write the pattern into CGRAM */
	for (Local_u8Iterator = 0; Local_u8Iterator < 8; Local_u8Iterator++) {
		CLCD_voidSendData(Copy_pu8Pattern[Local_u8Iterator]);
	}

	/* Go Back To DDRAM To Display The Pattern */
	CLCD_voidGoToXY(Copy_u8XPos, Copy_u8YPos);

	/* Display The Pattern Written In The CGRAM */
	CLCD_voidSendData(Copy_u8PatternNumber);
}
