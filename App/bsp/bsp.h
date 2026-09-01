#include "def.h"
#include "stm32f1xx_hal.h"

void bspInit();

void delay(uint32_t ms);
uint32_t millis();

void SystemClock_Config();
void Error_Handler();