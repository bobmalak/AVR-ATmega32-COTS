/*********************************************************************************/
/*********************************************************************************/
/*********************    Author:   Abanob Malak     *****************************/
/*********************    Layer:    MCAL             *****************************/
/*********************    SWC:      TIMER            *****************************/
/*********************    Version:  1.00             *****************************/
/*********************************************************************************/
/*********************************************************************************/
#ifndef TIMER_INTERFACE_H_
#define TIMER_INTERFACE_H_


//Timer0,2 Wave Generation Modes

#define TIMER_NORMAL								    1
#define TIMER_PHC_PWM								    2
#define TIMER_CTC									    3
#define TIMER_FAST_PWM								    4

//Timer1 Wave Generation Modes

#define TIMER1_NORMAL                                   1
#define TIMER1_PHC_PWM_8_BIT                            2
#define TIMER1_PHC_PWM_9_BIT                            3
#define TIMER1_PHC_PWM_10_BIT                           4
#define TIMER1_CTC                                      5
#define TIMER1_FAST_PWM_8_BIT                           6
#define TIMER1_FAST_PWM_9_BIT                           7
#define TIMER1_FAST_PWM_10_BIT                          8
#define TIMER1_PHFC_PWM_CUSTOM_TOP                      9
#define TIMER1_PHFC_PWM                                 10
#define TIMER1_PHC_PWM_CUSTOM_TOP                       11
#define TIMER1_PHC_PWM                                  12
#define TIMER1_CTC_CUSTOM_TOP                           13
#define TIMER1_FAST_PWM_CUSTOM_TOP                      14
#define TIMER1_FAST_PWM                                 15

//Prescaler

#define  PRSCLR_DISABLE_CLOCK                        	0
#define  PRSCLR_DIV_BY_1                             	1
#define  PRSCLR_DIV_BY_8                             	2
#define  PRSCLR_DIV_BY_64                            	3
#define  PRSCLR_DIV_BY_256                           	4
#define  PRSCLR_DIV_BY_1024                   		 	5
#define  PRSCLR_EXT_CLK_FALLING_EDGE           			6
#define  PRSCLR_EXT_CLK_RISING_EDGE           		 	7

//Compare Match Output Mode

#define OCM_DISCONNECT									0
#define OCM_CTC_TOGGLE									1
#define OCM_CTC_CLR										2
#define OCM_CTC_SET										3
#define OCM_FAST_PWM_NON_INVERTED						2
#define OCM_FAST_PWM_INVERTED							3
#define OCM_PHC_PWM_NON_INVERTED	   					2
#define OCM_PHC_PWM_INVERTED			   				3


//Interrupt Enable/Disable

#define INT_ENABLE							 			1
#define INT_DISABLE										2


//Interrupt IDs

#define	INT_TIMER0_OVF									7
#define	INT_TIMER0_COMP									6
#define INT_TIMER1_OVF									5
#define INT_TIMER1_CAPT									4
#define INT_TIMER1A_COMP								3
#define INT_TIMER1B_COMP								2
#define INT_TIMER2_OVF									1
#define INT_TIMER2_COMP									0

//Timer IDs

#define TIMER0											0
#define TIMER1A											1
#define TIMER1B											2
#define TIMER1											3
#define TIMER2											4


//Input Capture Edge Select Options

#define FALLING_EDGE									0
#define RISING_EDGE										1

//SCHEDULE REPEATABILITY

#define REPEAT_ONCE										1
#define REPEAT_PERIODIC									2


typedef struct timer{
	u8 WaveGenMode;
	u8 Prescaler;
	u8 CompareMatchOutputMode;
	u8 CompareMatchInterrupt;
	u8 OverFlowInterrupt;
}Timer_t;



typedef struct timer1{
	u8 WaveGenMode;
	u8 Prescaler;
	u8 CompareMatchOutputMode_A;
	u8 CompareMatchOutputMode_B;
	u8 CompareMatchInterrupt_A;
	u8 CompareMatchInterrupt_B;
	u8 OverFlowInterrupt;
}Timer1_t;

/************************************************************************************************/
/* Function Name  : TIMER_u8SetCallBack                                                         */
/* Description    : Set a callback function for a specific interrupt.                           */
/* Fun. Argument1 : u8 Copy_u8InterruptID  ID of the interrupt.                                 */
/* Fun. Argument2 : void(*Copy_pvCallBackFunc)(void) Pointer to the callback function.          */
/* Fun. Return    : u8 Status of the operation.                                                 */
/************************************************************************************************/
u8 TIMER_u8SetCallBack(u8 Copy_u8InterruptID, void(*Copy_pvCallBackFunc)(void));


/************************************************************************************************/
/* Function Name  : TIMER_u8SetTimerVal                                                         */
/* Description    : Set the timer value for a specified timer.                                  */
/* Fun. Argument1 : u8 Copy_u8TimerID   ID of the timer.                                        */
/* Fun. Argument2 : u16 Copy_u16Value    Value to set the timer to.                             */
/* Fun. Return    : u8 Status of the operation.                                                 */
/************************************************************************************************/
u8 TIMER_u8SetTimerVal(u8 Copy_u8TimerID, u16 Copy_u16Value);



/************************************************************************************************/
/* Function Name  : TIMER_u8GetTimerVal                                                         */
/* Description    : Get the current timer value for a specified timer.                          */
/* Fun. Argument1 : u8 Copy_u8TimerID   ID of the timer.                                        */
/* Fun. Argument2 : u16* Copy_pu16Value   Pointer to store the current timer value.             */
/* Fun. Return    : u8 Status of the operation.                                                 */
/************************************************************************************************/
u8 TIMER_u8GetTimerVal(u8 Copy_u8TimerID, u16* Copy_pu16Value);


/************************************************************************************************/
/* Function Name  : TIMER_u8SetCompMatch                                                        */
/* Description    : Set the compare match value for a specified timer.                          */
/* Fun. Argument1 : u8 Copy_u8TimerID   ID of the timer.                                        */
/* Fun. Argument2 : u16 Copy_u16Value    Compare match value.                                   */
/* Fun. Return    : u8 Status of the operation.                                                 */
/************************************************************************************************/
u8 TIMER_u8SetCompMatch(u8 Copy_u8TimerID, u16 Copy_u16Value);


/************************************************************************************************/
/* Function Name  : TIMER_u8SetIntStatus                                                        */
/* Description    : Enable or disable interrupts for a specific timer.                          */
/* Fun. Argument1 : u8 Copy_u8InterruptID  ID of the interrupt.                                 */
/* Fun. Argument2 : u8 Copy_u8Status  Enable or disable status.                                 */
/* Fun. Return    : u8 Status of the operation.                                                 */
/************************************************************************************************/
u8 TIMER_u8SetIntStatus(u8 Copy_u8InterruptID, u8 Copy_u8Status);


/************************************************************************************************/
/* Function Name  : TIMER0_u8Init                                                               */
/* Description    : Initialize Timer0 with the specified settings.                              */
/* Fun. Argument1 : Timer_t* Copy_psTimer  Pointer to Timer0 configuration structure.           */
/* Fun. Return    : u8 Status of the operation.                                                 */
/************************************************************************************************/
u8 TIMER0_u8Init(Timer_t* Copy_psTimer);


/************************************************************************************************/
/* Function Name  : TIMER0_delay_ms                                                             */
/* Description    : Introduce a delay in milliseconds using Timer0.                             */
/* Fun. Argument1 : Timer_t* Copy_psTimer  Pointer to Timer0 configuration structure.           */
/* Fun. Argument2 : u16 Copy_u16Time   Delay time in milliseconds.                              */
/* Fun. Return    : u8 Status of the operation.                                                 */
/************************************************************************************************/
u8 TIMER0_delay_ms(Timer_t* Copy_psTimer, u16 Copy_u16Time);


/************************************************************************************************/
/* Function Name  : TIMER1_u8Init                                                               */
/* Description    : Initialize Timer1 with the specified settings.                              */
/* Fun. Argument1 : Timer1_t* Copy_psTimer  Pointer to Timer1 configuration structure.          */
/* Fun. Return    : u8 Status of the operation.                                                 */
/************************************************************************************************/
u8 TIMER1_u8Init(Timer1_t* Copy_psTimer);


/************************************************************************************************/
/* Function Name  : TIMER1_voidSetTopValue                                                      */
/* Description    : Set the top value for Timer1 in PWM mode.                                   */
/* Fun. Argument1 : u16 Copy_u16Value  Top value for Timer1.                                    */
/* Fun. Return    : None                                                                        */
/************************************************************************************************/
void TIMER1_voidSetTopValue(u16 Copy_u16Value);


/************************************************************************************************/
/* Function Name  : TIMER1_u8PWMGenerate                                                        */
/* Description    : Generate PWM signal using Timer1 with specified period and on-time.         */
/* Fun. Argument1 : Timer1_t* Copy_psTimer  Pointer to Timer1 configuration structure.          */
/* Fun. Argument2 : u16 Copy_u16PeriodTime  PWM period time in milliseconds.                    */
/* Fun. Argument3 : u16 Copy_u16OnTime   PWM on-time in milliseconds.                           */
/* Fun. Return    : u8 Status of the operation.                                                 */
/************************************************************************************************/
u8 TIMER1_u8PWMGenerate(Timer1_t* Copy_psTimer, u16 Copy_u16PeriodTime, u16 Copy_u16OnTime);


/************************************************************************************************/
/* Function Name  : TIMER2_u8Init                                                               */
/* Description    : Initialize Timer2 with the specified settings.                              */
/* Fun. Argument1 : Timer_t* Copy_psTimer  Pointer to Timer2 configuration structure.           */
/* Fun. Return    : u8 Status of the operation.                                                 */
/************************************************************************************************/
u8 TIMER2_u8Init(Timer_t* Copy_psTimer);


/************************************************************************************************/
/* Function Name  : TIMER2_u8PWMGenerate                                                        */
/* Description    : Generate a PWM signal using Timer2 with the specified duty cycle.           */
/* Fun. Argument1 : Timer_t* Copy_psTimer  Pointer to Timer2 configuration structure.           */
/* Fun. Argument2 : u8 Copy_u8DutyCycle   Duty cycle of the PWM signal (0-100).                 */
/* Fun. Return    : u8 Status of the operation.                                                 */
/************************************************************************************************/
u8 TIMER2_u8PWMGenerate(Timer_t* Copy_psTimer, u8 Copy_u8DutyCycle);


/************************************************************************************************/
/* Function Name  : TIMER2_delay_ms                                                             */
/* Description    : Introduce a delay in milliseconds using Timer2.                             */
/* Fun. Argument1 : Timer_t* Copy_psTimer  Pointer to Timer2 configuration structure.           */
/* Fun. Argument2 : u16 Copy_u16Time   Delay time in milliseconds.                              */
/* Fun. Return    : u8 Status of the operation.                                                 */
/************************************************************************************************/
u8 TIMER2_delay_ms(Timer_t* Copy_psTimer, u16 Copy_u16Time);


/************************************************************************************************/
/* Function Name  : TIMER2_delay_us                                                             */
/* Description    : Introduce a delay in microseconds using Timer2.                             */
/* Fun. Argument1 : Timer_t* Copy_psTimer  Pointer to Timer2 configuration structure.           */
/* Fun. Argument2 : u16 Copy_u16Time   Delay time in microseconds.                              */
/* Fun. Return    : u8 Status of the operation.                                                 */
/************************************************************************************************/
u8 TIMER2_delay_us(Timer_t* Copy_psTimer, u16 Copy_u16Time);


/*******************************************************************************************************/
/* Function Name  : TIMER2_u8Schedule                                                                  */
/* Description    : Schedule a function to be called after a specified delay.                          */
/* Fun. Argument1 : u16 Copy_u16msDelayTime  Delay time in milliseconds before calling the function.   */
/* Fun. Argument2 : void(*Copy_pvFunc)(void)  Pointer to the function to be called.                    */
/* Fun. Argument3 : u8 Copy_u8Repeatability  Defines if the function should repeat periodically or not.*/
/* Fun. Return    : u8 Status of the operation.                                                        */
/*******************************************************************************************************/
u8 TIMER2_u8Schedule(u16 Copy_u16msDelayTime, void(*Copy_pvFunc)(void), u8 Copy_u8Repeatability);


/**********************************************************************************************************/
/* Function Name  : ICU_u8Init                                                                            */
/* Description    : Initialize the Input Capture Unit with specified edge detection and interrupt status. */
/* Fun. Argument1 : u8 Copy_u8Edge   Edge detection type (rising or falling).                             */
/* Fun. Argument2 : u8 Copy_u8InterruptStatus  Enable or disable interrupts for input capture.            */
/* Fun. Return    : u8 Status of the operation.                                                           */
/**********************************************************************************************************/
u8 ICU_u8Init(u8 Copy_u8Edge, u8 Copy_u8InterruptStatus);


/************************************************************************************************/
/* Function Name  : ICU_u8SetEdge                                                               */
/* Description    : Set the edge detection for the Input Capture Unit.                          */
/* Fun. Argument1 : u8 Copy_u8Edge  Edge detection type (rising or falling).                    */
/* Fun. Return    : u8 Status of the operation.                                                 */
/************************************************************************************************/
u8 ICU_u8SetEdge(u8 Copy_u8Edge);


/************************************************************************************************/
/* Function Name  : ICU_u16ReadInputCapture                                                     */
/* Description    : Read the value captured by the Input Capture Unit.                          */
/* Fun. Return    : u16 Captured value from the Input Capture Unit.                             */
/************************************************************************************************/
u16 ICU_u16ReadInputCapture(void);



#endif
