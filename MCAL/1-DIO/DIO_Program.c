/*********************************************************************************/
/*********************************************************************************/
/*********************    Author:   Abanob Malak     *****************************/
/*********************    Layer:    MCAL             *****************************/
/*********************    SWC:      DIO              *****************************/
/*********************    Version:  1.00             *****************************/
/*********************************************************************************/
/*********************************************************************************/

#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPES.h"
#include "DIO_Config.h"
#include "DIO_Interface.h"
#include "DIO_Private.h"
#include "DIO_Register.h"

/************************************************************************************************/
/* Function Name : DIO_u8SetPinValue                                                           */
/* Description : Set value of one pin of the Port register                                      */
/* Fun. Argument1: Copy_u8Port {DIO_u8PORTA, DIO_u8PORTB, DIO_u8PORTC, DIO_u8PORTD}             */
/* Fun. Argument2: Copy_u8Pin {DIO_u8PIN0, DIO_u8PIN1, DIO_u8PIN2, DIO_u8PIN3,                  */
/*                            DIO_u8PIN4, DIO_u8PIN5, DIO_u8PIN6, DIO_u8PIN7}                   */
/* Fun. Argument3: Copy_u8Value {DIO_u8PIN_LOW, DIO_u8PIN_HIGH}                                 */
/* Fun. Return : u8                                                                             */
/************************************************************************************************/
u8 DIO_u8SetPinValue(u8 Copy_u8Port, u8 Copy_u8Pin, u8 Copy_u8Value)
{
    u8 Local_u8ErrorState = 0;
    if (Copy_u8Pin <= DIO_u8PIN7)
    {
        if (Copy_u8Value == DIO_u8PIN_LOW)
        {
            switch (Copy_u8Port)
            {
            case DIO_u8PORTA: CLR_BIT(PORTA, Copy_u8Pin); break;
            case DIO_u8PORTB: CLR_BIT(PORTB, Copy_u8Pin); break;
            case DIO_u8PORTC: CLR_BIT(PORTC, Copy_u8Pin); break;
            case DIO_u8PORTD: CLR_BIT(PORTD, Copy_u8Pin); break;
            default: Local_u8ErrorState = 1; break;
            }
        }
        else if (Copy_u8Value == DIO_u8PIN_HIGH)
        {
            switch (Copy_u8Port)
            {
            case DIO_u8PORTA: SET_BIT(PORTA, Copy_u8Pin); break;
            case DIO_u8PORTB: SET_BIT(PORTB, Copy_u8Pin); break;
            case DIO_u8PORTC: SET_BIT(PORTC, Copy_u8Pin); break;
            case DIO_u8PORTD: SET_BIT(PORTD, Copy_u8Pin); break;
            default: Local_u8ErrorState = 1; break;
            }
        }
        else
        {
            Local_u8ErrorState = 1;
        }
    }
    else
    {
        Local_u8ErrorState = 1;
    }

    return Local_u8ErrorState;
}

/************************************************************************************************/
/* Function Name : DIO_u8SetPORTValue                                                           */
/* Description : Set value of the whole Port register                                           */
/* Fun. Argument1: Copy_u8Port {DIO_u8PORTA, DIO_u8PORTB, DIO_u8PORTC, DIO_u8PORTD}             */
/* Fun. Argument2: Copy_u8Direction {DIO_u8PORT_LOW, DIO_u8PORT_HIGH}                           */
/* Fun. Return : u8                                                                             */
/************************************************************************************************/
u8 DIO_u8SetPORTValue(u8 Copy_u8Port, u8 Copy_u8Direction)
{
    u8 Local_u8ErrorState = 0;
    switch (Copy_u8Port)
    {
    case DIO_u8PORTA: PORTA = Copy_u8Direction; break;
    case DIO_u8PORTB: PORTB = Copy_u8Direction; break;
    case DIO_u8PORTC: PORTC = Copy_u8Direction; break;
    case DIO_u8PORTD: PORTD = Copy_u8Direction; break;
    default: Local_u8ErrorState = 1; break;
    }

    return Local_u8ErrorState;
}

/************************************************************************************************/
/* Function Name : DIO_u8GetPinValue                                                            */
/* Description : Get value of one pin of the Port register                                      */
/* Fun. Argument1: Copy_u8Port {DIO_u8PORTA, DIO_u8PORTB, DIO_u8PORTC, DIO_u8PORTD}             */
/* Fun. Argument2: Copy_u8Pin {DIO_u8PIN0, DIO_u8PIN1, DIO_u8PIN2, DIO_u8PIN3,                  */
/*                            DIO_u8PIN4, DIO_u8PIN5, DIO_u8PIN6, DIO_u8PIN7}                   */
/* Fun. Argument3: Copy_pu8Value pointer to store the value of the pin                          */
/* Fun. Return : u8                                                                             */
/************************************************************************************************/
u8 DIO_u8GetPinValue(u8 Copy_u8Port, u8 Copy_u8Pin, u8* Copy_pu8Value)
{
    u8 Local_u8ErrorState = 0;

    if ((Copy_pu8Value != NULL) && (Copy_u8Pin <= DIO_u8PIN7))
    {
        switch (Copy_u8Port)
        {
        case DIO_u8PORTA: *Copy_pu8Value = GET_BIT(PINA, Copy_u8Pin); break;
        case DIO_u8PORTB: *Copy_pu8Value = GET_BIT(PINB, Copy_u8Pin); break;
        case DIO_u8PORTC: *Copy_pu8Value = GET_BIT(PINC, Copy_u8Pin); break;
        case DIO_u8PORTD: *Copy_pu8Value = GET_BIT(PIND, Copy_u8Pin); break;
        default: Local_u8ErrorState = 1; break;
        }
    }
    else
    {
        Local_u8ErrorState = 1;
    }

    return Local_u8ErrorState;
}


