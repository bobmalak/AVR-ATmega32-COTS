/*********************************************************************************/
/*********************************************************************************/
/*********************    Author:   Abanob Malak     *****************************/
/*********************    Layer:    MCAL             *****************************/
/*********************    SWC:      SPI              *****************************/
/*********************    Version:  1.00             *****************************/
/*********************************************************************************/
/*********************************************************************************/

#ifndef SPI_INTERFACE_H_
#define SPI_INTERFACE_H_

/************************************************************************************************/
/* Function Name  : SPI_voidMasterInit                                                          */
/* Description    : Initialize the SPI peripheral in Master mode with the configured settings.  */
/* Fun. Argument1 : None                                                                        */
/* Fun. Return    : None                                                                        */
/************************************************************************************************/
void SPI_voidMasterInit(void);


/************************************************************************************************/
/* Function Name  : SPI_voidSlaveInit                                                           */
/* Description    : Initialize the SPI peripheral in Slave mode with the configured settings.   */
/* Fun. Argument1 : None                                                                        */
/* Fun. Return    : None                                                                        */
/************************************************************************************************/
void SPI_voidSlaveInit(void);


/************************************************************************************************/
/* Function Name  : SPI_u8SynchTranscieve                                                       */
/* Description    : Transmit and receive a single byte of data via SPI in synchronous mode.     */
/* Fun. Argument1 : u8 Copy_u8Data  The data byte to be transmitted.                            */
/* Fun. Argument2 : u8* Copy_pu8ReceivedData  Pointer to store the received data byte.          */
/* Fun. Return    : u8  Status of the operation (e.g., success or error code).                  */
/************************************************************************************************/
u8 SPI_u8SynchTranscieve(u8 Copy_u8Data, u8* Copy_pu8ReceivedData);


/**************************************************************************************************/
/* Function Name  : SPI_u8AsynchTranscieve                                                        */
/* Description    : Transmit and receive a single byte of data via SPI in asynchronous mode and   */
/*                   register a callback function to be notified upon completion.                 */
/* Fun. Argument1 : u8 Copy_u8Data  The data byte to be transmitted.                              */
/* Fun. Argument2 : u8* Copy_pu8ReceivedData  Pointer to store the received data byte.            */
/* Fun. Argument3 : void (*Copy_pvNotifFunc)(void)  Pointer to the notification callback function.*/
/* Fun. Return    : u8  Status of the operation (e.g., success or error code).                    */
/**************************************************************************************************/
u8 SPI_u8AsynchTranscieve(u8 Copy_u8Data, u8* Copy_pu8ReceivedData, void (*Copy_pvNotifFunc)(void));


#endif
