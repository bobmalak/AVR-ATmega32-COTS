/*********************************************************************************/
/*********************************************************************************/
/*********************    Author:   Abanob Malak     *****************************/
/*********************    Layer:    MCAL             *****************************/
/*********************    SWC:      ADC              *****************************/
/*********************    Version:  1.00             *****************************/
/*********************************************************************************/
/*********************************************************************************/
#ifndef ADC_INTERFACE_H_
#define ADC_INTERFACE_H_

//ADC Channels
#define ADC_SINGLE_ENDED_ADC0                0
#define ADC_SINGLE_ENDED_ADC1                1
#define ADC_SINGLE_ENDED_ADC2                2
#define ADC_SINGLE_ENDED_ADC3                3
#define ADC_SINGLE_ENDED_ADC4                4
#define ADC_SINGLE_ENDED_ADC5                5
#define ADC_SINGLE_ENDED_ADC6                6
#define ADC_SINGLE_ENDED_ADC7                7
#define ADC_DIFF_ADC0P_ADC0N_10XG            8
#define ADC_DIFF_ADC1P_ADC0N_10XG            9
#define ADC_DIFF_ADC0P_ADC0N_200XG           10
#define ADC_DIFF_ADC1P_ADC0N_200XG           11
#define ADC_DIFF_ADC2P_ADC2N_10XG            12
#define ADC_DIFF_ADC3P_ADC2N_10XG            13
#define ADC_DIFF_ADC2P_ADC2N_200XG           14
#define ADC_DIFF_ADC3P_ADC2N_200XG           15
#define ADC_DIFF_ADC0P_ADC1N_1XG             16
#define ADC_DIFF_ADC1P_ADC1N_1XG             17
#define ADC_DIFF_ADC2P_ADC1N_1XG             18
#define ADC_DIFF_ADC3P_ADC1N_1XG             19
#define ADC_DIFF_ADC4P_ADC1N_1XG             20
#define ADC_DIFF_ADC5P_ADC1N_1XG             21
#define ADC_DIFF_ADC6P_ADC1N_1XG             22
#define ADC_DIFF_ADC7P_ADC1N_1XG             23
#define ADC_DIFF_ADC0P_ADC2N_1XG             24
#define ADC_DIFF_ADC1P_ADC2N_1XG             25
#define ADC_DIFF_ADC2P_ADC2N_1XG             26
#define ADC_DIFF_ADC3P_ADC2N_1XG             27
#define ADC_DIFF_ADC4P_ADC2N_1XG             28
#define ADC_DIFF_ADC5P_ADC2N_1XG             29
#define ADC_SINGLE_ENDED_VBG                 30
#define ADC_SINGLE_ENDED_GND                 31

typedef struct Chain{
	u8* ChannelArr;
	u16* ResultArr;
	u8 Size;
	void (*NotiFunc)(void);
}Chain_t;
/************************************************************************************************/
/* Function Name  : ADC_voidInit                                                                */
/* Description    : Initialize the ADC module and configure its settings                        */
/* Fun. Argument1 : None                                                                        */
/* Fun. Return    : None                                                                        */
/************************************************************************************************/
void ADC_voidInit(void);


/************************************************************************************************/
/* Function Name  : ADC_u8StartConversionSynch                                                  */
/* Description    : Start an ADC conversion synchronously and wait for completion               */
/* Fun. Argument1 : Copy_u8Channel - Channel to be used for ADC conversion                      */
/* Fun. Argument2 : Copy_pu16Reading - Pointer to store the ADC result                          */
/* Fun. Return    : u8 - Status of the conversion process                                       */
/************************************************************************************************/
u8 ADC_u8StartConversionSynch(u8 Copy_u8Channel,u16* Copy_pu16Reading);


/************************************************************************************************/
/* Function Name  : ADC_u8StartConversionAsynch                                                 */
/* Description    : Start an ADC conversion asynchronously and notify via callback function     */
/* Fun. Argument1 : Copy_u8Channel - Channel to be used for ADC conversion                      */
/* Fun. Argument2 : Copy_pu16Reading - Pointer to store the ADC result                          */
/* Fun. Argument3 : Copy_pvNotificationFunc - Function pointer for notification upon completion */
/* Fun. Return    : u8 - Status of the conversion process                                       */
/************************************************************************************************/
u8 ADC_u8StartConversionAsynch(u8 Copy_u8Channel,u16* Copy_pu16Reading, void(*Copy_pvNotificationFunc)(void));


/************************************************************************************************/
/* Function Name  : ADC_u8StartChainConversionAsynch                                            */
/* Description    : Start a chain of ADC conversions asynchronously                             */
/* Fun. Argument1 : Copy_psADCChain - Pointer to the chain structure with channels and results  */
/* Fun. Return    : u8 - Status of the chain conversion process                                 */
/************************************************************************************************/
u8 ADC_u8StartChainConversionAsynch(Chain_t* Copy_psADCChain);


/************************************************************************************************/
/* Function Name  : ADC_u8StartChainConversionSynch                                             */
/* Description    : Start a chain of ADC conversions synchronously                              */
/* Fun. Argument1 : Copy_psADCChain - Pointer to the chain structure with channels and results  */
/* Fun. Return    : u8 - Status of the chain conversion process                                 */
/************************************************************************************************/
u8 ADC_u8StartChainConversionSynch(Chain_t* Copy_psADCChain);

#endif
