/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    delay.c
  * @brief   This file provides code for the configuration
  *          of the USART instances.
  ******************************************************************************
  */
	
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "delay.h"

/**

 * @brief  Initializes DWT_Clock_Cycle_Count for DWT_Delay_us function

 * @return Error DWT counter

 *         1: clock cycle counter not started

 *         0: clock cycle counter works

 */

uint32_t DWT_Delay_Init(void) {

  /* Disable TRC */

  CoreDebug->DEMCR &= ~CoreDebug_DEMCR_TRCENA_Msk; // ~0x01000000;

  /* Enable TRC */

  CoreDebug->DEMCR |=  CoreDebug_DEMCR_TRCENA_Msk; // 0x01000000;



  /* Disable clock cycle counter */

  DWT->CTRL &= ~DWT_CTRL_CYCCNTENA_Msk; //~0x00000001;

  /* Enable  clock cycle counter */

  DWT->CTRL |=  DWT_CTRL_CYCCNTENA_Msk; //0x00000001;



  /* Reset the clock cycle counter value */

  DWT->CYCCNT = 0;



     /* 3 NO OPERATION instructions */

     asm("NOP");

     asm("NOP");

     asm("NOP");



  /* Check if clock cycle counter has started */

     if(DWT->CYCCNT)

     {

       return 0; /*clock cycle counter started*/

     }

     else

  {

    return 1; /*clock cycle counter not started*/

  }

}
