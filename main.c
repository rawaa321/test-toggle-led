/**
  ******************************************************************************
  * @file    main.c
  * @author  Warda Rawaa
  * @brief   Bit Mask 
  * @version V1.0.0
  * @date    16-10-2022
  *****************************************************************************/

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx.h"
#include "gpio.h"
#include "led.h"

/* Private define ------------------------------------------------------------*/
/*----------------Private Functions Prototype---------------------------------*/


/* Private variables ---------------------------------------------------------*/

int main()
{
InputOutputConfig(GPIOD, PA0, INPUT );
InputOutputConfig(GPIOD, PIN12, OUTPUT );
InputOutputConfig(GPIOD, PIN15, OUTPUT );
GPIO_Write_Pin(GPIOD,PIN15,SET); 




  while(1)
  {
   
  }
}