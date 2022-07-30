/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/** @file  GPIO_Mak.c
 *  @brief
 *
 *  @details
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "GPIO_Mak.h"
/**********************************************************************************************************************
 *  LOCAL MACROS CONSTANT\FUNCTION
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/

/******************************************************************************
 * \Syntax          : void GPIO_Mak_DigitalWritePort(uint8_t portName, uint8_t portLevel)
 * \Description     : Digital Write fun. for all pins of the port in one time
 *
 * \Parameters (in) : portName     The Name of The Port
 *										portLevel    Level to Set The Port
 * \Parameters (out): None
 * \Return value:   : None
 *******************************************************************************/
void GPIO_Mak_DigitalWritePort(uint8_t portName, uint8_t portLevel)
{
	switch (portName)
	{
	case PORTA:
		GPIOA->DEN = portLevel;
		GPIOA->DATA = portLevel;
		break;
	case PORTB:
		GPIOB->DEN = portLevel;

		GPIOB->DATA = portLevel;
		break;
	case PORTC:
		GPIOC->DEN = portLevel;
		GPIOC->DATA = portLevel;
		break;
	case PORTD:
		GPIOD->DEN = portLevel;
		GPIOD->DATA = portLevel;
		break;
	case PORTE:
		GPIOE->DEN = portLevel;
		GPIOE->DATA = portLevel;
		break;
	case PORTF:
		GPIOF->DEN = portLevel;
		GPIOF->DATA = portLevel;
		break;
	}
}

/******************************************************************************
 * \Syntax          : void GPIO_Mak_DigitalWritePin(uint8_t portName, uint8_t pinName, uint8_t portLevel)
 * \Description     : Digital Write fun. for indevidual pins of the port
 *
 * \Parameters (in) : portName     The Name of The Port
 *										pinName      The Pin Number
 *										portLevel    Level to Set The Pin.   "HIGH" or "LOW"
 * \Parameters (out): None
 * \Return value:   : None
 *******************************************************************************/
void GPIO_Mak_DigitalWritePin(uint8_t portName, uint8_t pinName, uint8_t portLevel)
{
	switch (portName)
	{
	case PORTA:
		SET_BIT(GPIOA->DEN, pinName);
		if (portLevel)
			SET_BIT(GPIOA->DATA, pinName);
		else
			CLR_BIT(GPIOA->DATA, pinName);
		break;
	case PORTB:
		SET_BIT(GPIOB->DEN, pinName);
		if (portLevel)
			SET_BIT(GPIOB->DATA, pinName);
		else
			CLR_BIT(GPIOB->DATA, pinName);
		break;
	case PORTC:
		SET_BIT(GPIOC->DEN, pinName);
		if (portLevel)
			SET_BIT(GPIOC->DATA, pinName);
		else
			CLR_BIT(GPIOC->DATA, pinName);
		break;
	case PORTD:
		SET_BIT(GPIOD->DEN, pinName);
		if (portLevel)
			SET_BIT(GPIOD->DATA, pinName);
		else
			CLR_BIT(GPIOD->DATA, pinName);
		break;
	case PORTE:
		SET_BIT(GPIOE->DEN, pinName);
		if (portLevel)
			SET_BIT(GPIOE->DATA, pinName);
		else
			CLR_BIT(GPIOE->DATA, pinName);
		break;
	case PORTF:
		SET_BIT(GPIOF->DEN, pinName);
		if (portLevel)
			SET_BIT(GPIOF->DATA, pinName);
		else
			CLR_BIT(GPIOF->DATA, pinName);
		break;
	}
}

/******************************************************************************
 * \Syntax          : void GPIO_Mak_PortMode(uint8_t portName, uint8_t portLevel)
 * \Description     : fun. to set Port Direction
 *
 * \Parameters (in) : portName     The Name of The Port
 *										portLevel    Level to Set The Port pins.   "ALL_OUTPUT" or "ALL_INPUT" to set all pins of the port
 * \Parameters (out): None
 * \Return value:   : None
 *******************************************************************************/
void GPIO_Mak_PortMode(uint8_t portName, uint8_t portLevel)
{

	switch (portName)
	{
	case PORTA:
		GPIOA->DIR = portLevel;
		break;
	case PORTB:
		GPIOB->DIR = portLevel;
		break;
	case PORTC:
		GPIOC->DIR = portLevel;
		break;
	case PORTD:
		GPIOD->DIR = portLevel;
		break;
	case PORTE:
		GPIOE->DIR = portLevel;
		break;
	case PORTF:
		GPIOF->DIR = portLevel;
		break;
	}
}

void GPIO_Mak_PinMode(uint8_t portName, uint8_t pinName, uint8_t portLevel)
{
	switch (portName)
	{
	case PORTA:
		if (portLevel)
			SET_BIT(GPIOA->DIR, pinName);
		else
			CLR_BIT(GPIOA->DIR, pinName);
		break;
	case PORTB:
		if (portLevel)
			SET_BIT(GPIOB->DIR, pinName);
		else
			CLR_BIT(GPIOB->DIR, pinName);
		break;
	case PORTC:
		if (portLevel)
			SET_BIT(GPIOC->DIR, pinName);
		else
			CLR_BIT(GPIOC->DIR, pinName);
		break;
	case PORTD:
		if (portLevel)
			SET_BIT(GPIOD->DIR, pinName);
		else
			CLR_BIT(GPIOD->DIR, pinName);
		break;
	case PORTE:
		if (portLevel)
			SET_BIT(GPIOE->DIR, pinName);
		else
			CLR_BIT(GPIOE->DIR, pinName);
		break;
	case PORTF:
		if (portLevel)
			SET_BIT(GPIOF->DIR, pinName);
		else
			CLR_BIT(GPIOF->DIR, pinName);
		break;
	}
}
/**********************************************************************************************************************
 *  END OF FILE: GPIO_Mak.c
 *********************************************************************************************************************/
