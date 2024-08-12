/*********************************************************************************/
/*********************************************************************************/
/*********************    Author:   Abanob Malak     *****************************/
/*********************    Layer:    MCAL             *****************************/
/*********************    SWC:      USART            *****************************/
/*********************    Version:  1.00             *****************************/
/*********************************************************************************/
/*********************************************************************************/
#ifndef USART_INTERFACE_H_
#define USART_INTERFACE_H_

/************************************************************************************************/
/* Function Name  : USART_voidInit                                                              */
/* Description    : Initialize the USART peripheral with the configured settings.               */
/* Fun. Argument1 : None                                                                        */
/* Fun. Return    : None                                                                        */
/************************************************************************************************/
void USART_voidInit(void);


/************************************************************************************************/
/* Function Name  : USART_u8SendCharSynch                                                       */
/* Description    : Send a single character via USART in synchronous mode.                      */
/* Fun. Argument1 : u16 Copy_u16Data  The data to be transmitted (character).                   */
/* Fun. Return    : u8  Status of the operation (e.g., success or error code).                  */
/************************************************************************************************/
u8 USART_u8SendCharSynch(u16 Copy_u16Data);


/**************************************************************************************************/
/* Function Name  : USART_u8SendCharAsynch                                                        */
/* Description    : Send a single character via USART in asynchronous mode and register a         */
/*                   callback function to be notified upon completion.                            */
/* Fun. Argument1 : u16 Copy_u16Data  The data to be transmitted (character).                     */
/* Fun. Argument2 : void (*Copy_pvNotifFunc)(void)  Pointer to the notification callback function.*/
/* Fun. Return    : u8  Status of the operation (e.g., success or error code).                    */
/**************************************************************************************************/
u8 USART_u8SendCharAsynch(u16 Copy_u16Data, void (*Copy_pvNotifFunc)(void));


/**************************************************************************************************/
/* Function Name  : USART_u8SendStringSynch                                                       */
/* Description    : Send a string via USART in synchronous mode.                                  */
/* Fun. Argument1 : char* Copy_pchString  Pointer to the null-terminated string to be transmitted.*/
/* Fun. Return    : u8  Status of the operation (e.g., success or error code).                    */
/**************************************************************************************************/
u8 USART_u8SendStringSynch(char* Copy_pchString);


/***************************************************************************************************/
/* Function Name  : USART_u8SendStringAsynch                                                       */
/* Description    : Send a string via USART in asynchronous mode and register a callback function  */
/*                   to be notified upon completion.                                               */
/* Fun. Argument1 : char* Copy_pchString  Pointer to the null-terminated string to be transmitted. */
/* Fun. Argument2 : void (*Copy_pvNotifFunc)(void)  Pointer to the notification callback function. */
/* Fun. Return    : u8  Status of the operation (e.g., success or error code).                     */
/***************************************************************************************************/
u8 USART_u8SendStringAsynch(char* Copy_pchString, void (*Copy_pvNotifFunc)(void));


/************************************************************************************************/
/* Function Name  : USART_u8ReceiveCharSynch                                                    */
/* Description    : Receive a single character via USART in synchronous mode.                   */
/* Fun. Argument1 : u16* Copy_pu16ReceivedData  Pointer to store the received data (character). */
/* Fun. Return    : u8  Status of the operation (e.g., success or error code).                  */
/************************************************************************************************/
u8 USART_u8ReceiveCharSynch(u16* Copy_pu16ReceivedData);


/**************************************************************************************************/
/* Function Name  : USART_u8ReceiveCharAsynch                                                     */
/* Description    : Receive a single character via USART in asynchronous mode and register a      */
/*                   callback function to be notified upon completion.                            */
/* Fun. Argument1 : u16* Copy_pu16ReceivedData  Pointer to store the received data (character).   */
/* Fun. Argument2 : void (*Copy_pvNotifFunc)(void)  Pointer to the notification callback function.*/
/* Fun. Return    : u8  Status of the operation (e.g., success or error code).                    */
/**************************************************************************************************/
u8 USART_u8ReceiveCharAsynch(u16* Copy_pu16ReceivedData, void (*Copy_pvNotifFunc)(void));


/************************************************************************************************/
/* Function Name  : USART_u8ReceiveBufferSynch                                                  */
/* Description    : Receive a buffer of data via USART in synchronous mode.                     */
/* Fun. Argument1 : u8* Copy_u8Buffer  Pointer to the buffer to store the received data.        */
/* Fun. Argument2 : u8 Copy_u8BufferSize  Size of the buffer to be received.                    */
/* Fun. Return    : u8  Status of the operation (e.g., success or error code).                  */
/************************************************************************************************/
u8 USART_u8ReceiveBufferSynch(u8* Copy_u8Buffer, u8 Copy_u8BufferSize);


/***************************************************************************************************/
/* Function Name  : USART_u8ReceiveBufferAsynch                                                    */
/* Description    : Receive a buffer of data via USART in asynchronous mode and register a         */
/*                   callback function to be notified upon completion.                             */
/* Fun. Argument1 : u8* Copy_u8Buffer  Pointer to the buffer to store the received data.           */
/* Fun. Argument2 : u8 Copy_u8BufferSize  Size of the buffer to be received.                       */
/* Fun. Argument3 : void (*Copy_pvNotifFunc)(void)  Pointer to the notification callback function. */
/* Fun. Return    : u8  Status of the operation (e.g., success or error code).                     */
/***************************************************************************************************/
u8 USART_u8ReceiveBufferAsynch(u8* Copy_u8Buffer, u8 Copy_u8BufferSize, void (*Copy_pvNotifFunc)(void));


#endif
