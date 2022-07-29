/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**    @file  main.c
 *     @author Mohammed Khaled Makbool
 *     @brief  program to blink led and change color
 * 
 *     @details
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "stdint.h"
#include "TM4C123.h"
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
void delayms(int t);

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/

/******************************************************************************
 * \Syntax          : int delayms(int)
 * \Description     : dumy delay using processor cycles
 *
 * \Parameters (in) : t   time to delay in millisecond
 *******************************************************************************/

void delayms(int t)
{
	volatile uint64_t x, y, f;
	for (x = 0; x < t; x++)
		for (y = 0; y < 790; y++)
			f = y;
}


/******************************************************************************
 * \Syntax          : int main()
 * \Description     : the main fun. of the program
 *
 *******************************************************************************/
int main()
{
	SYSCTL->RCC |= 0x02400540;
	SYSCTL->RCGCGPIO |= 0x20;
	GPIOF->DIR |= 0xFF;
	GPIOF->DEN |= 0xFF;
	while (1)
	{
		GPIO_Mak_DigitalWritePin(PORTF, PIN1, HIGH);
		delayms(1000);
		GPIO_Mak_DigitalWritePin(PORTF, PIN2, HIGH);
		delayms(1000);
		GPIO_Mak_DigitalWritePin(PORTF, PIN3, HIGH);
		delayms(1000);
		GPIO_Mak_DigitalWritePin(PORTF, PIN1, LOW);
		delayms(1000);
		GPIO_Mak_DigitalWritePin(PORTF, PIN2, LOW);
		delayms(1000);
		GPIO_Mak_DigitalWritePin(PORTF, PIN3, LOW);
		delayms(1000);
	}
}

/**********************************************************************************************************************
 *  END OF FILE: main.c
 *********************************************************************************************************************/
