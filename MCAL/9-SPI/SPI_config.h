/*********************************************************************************/
/*********************************************************************************/
/*********************    Author:   Abanob Malak     *****************************/
/*********************    Layer:    MCAL             *****************************/
/*********************    SWC:      SPI              *****************************/
/*********************    Version:  1.00             *****************************/
/*********************************************************************************/
/*********************************************************************************/

#ifndef SPI_CONFIG_H_
#define SPI_CONFIG_H_
/* Options:
            1- DISABLE                   
            2- ENABLE                                   */

#define SPI_ENABLE                      ENABLE

/* Options:
            1- DISABLE                   
            2- ENABLE                                   */
            
#define SPI_INTERRUPT                   ENABLE

/* Options:
            1- MSB                   
            2- LSB                                      */
            
#define DATA_ORDER                      LSB

/* Options:
            1- RISING                   
            2- FALLING                                  */
            
#define LEADING_EDGE                    RISING

/* Options:
            1- SAMPLE                   
            2- SETUP                                    */
            
#define LEADING_EDGE_ACTION             SETUP

/* Options:
            1- DIV_BY_2                   
            2- DIV_BY_4
            3- DIV_BY_8
            4- DIV_BY_16
            5- DIV_BY_32
            6- DIV_BY_64
            7- DIV_BY_128
                                                */
            
#define PRESCALER                        DIV_BY_8

#endif
