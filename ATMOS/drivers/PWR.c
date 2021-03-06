/**
 * \file PWR.c
 *
 * \brief Board power management library
 *
 * Created: 4/9/2015 16:39:02
 *  Author: Camden
 */ 

#include "drivers/PWR.h"
#include "common.h"

/*************************************************************************//**
  @brief Initializes the power management system
*****************************************************************************/
void PWR_Init(void){
	DDRD |= 0b11000000;
}

/*************************************************************************//**
  @brief Turns on the 5V power supply
*****************************************************************************/
void PWR_TurnOn5V(void){
	PORTD |= 0b10000000;
}

/*************************************************************************//**
  @brief Turns off the 5V power supply
*****************************************************************************/
void PWR_TurnOff5V(void){
	PORTD &= 0b01111111;
}

/*************************************************************************//**
  @brief Turns on the 4.3V power supply
*****************************************************************************/
void PWR_TurnOn43V(void){
	PORTD |= 0b01000000;
}

/*************************************************************************//**
  @brief Turns off the 4.3V power supply
*****************************************************************************/
void PWR_TurnOff43V(void){
	PORTD &= 0b10111111;
}