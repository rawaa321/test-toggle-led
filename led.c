#include "led.h"
#include "gpio.h"

void InputOutputConfig(uint32_t *GPIOx, uint8_t Pin, uint8_t Mode )
{
  GPIO_Clock_Enable(GPIOD);
  GPIO_Config(GPIOD, PIN12, OUTPUT);
  GPIO_Config(GPIOD, PIN15, OUTPUT);
    GPIO_Config(GPIOD, PA0, INPU
}
void ButtonToggleLed (uint32_t *GPIOx,uint8_t Pin,uint8_t PinValue)
{
 
   GPIO_Write_Pin(GPIOD, PIN15, 1) ;
    if GPIO_Read_Pin(GPIOD, PA0,1);
  GPIO_Write_Pin(GPIOD, PIN12 ,1);
  else 
    if GPIO_Read_Pin(GPIOD, PA0,1);
    GPIO_Write_Pin(GPIOD, PIN12 ,0);
}
