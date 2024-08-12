/*********************************************************************************/
/*********************************************************************************/
/*********************    Author:   Abanob Malak     *****************************/
/*********************    Layer:    HAl              *****************************/
/*********************    SWC:      SSD              *****************************/
/*********************    Version:  1.00             *****************************/
/*********************************************************************************/
/*********************************************************************************/
#ifndef SSD_INTERFACE_H_
#define SSD_INTERFACE_H_

#define ANODE 		1
#define CATHODE 	0

typedef struct ssd{
	u8 COM_TYPE;
	u8 Port;
	u8 EnablePort;
	u8 EnablePin;
}SSD_t;

/***************************************************************************************************/
/* Function Name : SSD_u8SetNumber                                                                 */
/* Description 	 : Display a number (0-9) on the SSD. The function sets the appropriate port value */
/*                based on the common type (ANODE or CATHODE).                                     */
/* Fun. Argument1: Copy_u8Number {Number to be displayed (0-9)}                                    */
/* Fun. Argument2: SSD {Pointer to the SSD_t structure containing SSD configuration}               */
/* Fun. Return 	 : u8 {OK if successful, NOT_OK if error occurs}                                   */
/***************************************************************************************************/
u8 SSD_u8SetNumber(u8 Copy_u8Number, SSD_t* SSD);

/*************************************************************************************************/
/* Function Name : SSD_u8Enable                                                                  */
/* Description 	 : Enable the SSD by setting the appropriate pin value based on the common type. */
/* Fun. Argument1: SSD {Pointer to the SSD_t structure containing SSD configuration}             */
/* Fun. Return 	 : u8 {OK if successful, NOT_OK if error occurs}                                 */
/*************************************************************************************************/
u8 SSD_u8Enable(SSD_t* SSD);

/*************************************************************************************************/
/* Function Name  : SSD_u8Disable                                                                 */
/* Description	  : Disable the SSD by setting the appropriate pin value based on the common type.*/
/* Fun. Argument1 : SSD {Pointer to the SSD_t structure containing SSD configuration}             */
/* Fun. Return	  : u8 {OK if successful, NOT_OK if error occurs}                                 */
/*************************************************************************************************/
u8 SSD_u8Disable(SSD_t* SSD);

#endif
