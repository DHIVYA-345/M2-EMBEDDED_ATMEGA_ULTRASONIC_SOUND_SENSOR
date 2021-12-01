/** 
* @file customer billing.h
*
*/
#ifndef __DISTANCE_SENSOR_H_
#define __DISTANCE_SENSOR_H__


#include <avr/io.h>             // This header file includes the appropriate Input/output definitions for the device 
#include <util/delay.h>         // to use delay function we need to include this library
#include <stdlib.h>             // we'll be using itoa() function to convert integer to character array that resides in this library


void HCSR04Init();
void HCSR04Trigger();

void lcd_command( unsigned char );

 
#endif  /* #define __DISTANCE_SENSOR_H__ */
