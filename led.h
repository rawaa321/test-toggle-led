#ifndef __LED_H
#define __LED_H
#include "gpio.h"
#include <stdint.h>

#define PA0   1

void InputOutputConfig(uint32_t *GPIOx, uint8_t Pin, uint8_t Mode );
void ButtonToggleLed (uint32_t *GPIOx,uint8_t Pin);
#endif