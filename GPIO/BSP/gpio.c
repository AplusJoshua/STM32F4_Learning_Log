#include "gpio.h"

void GPIO_config(GPIO_TypeDef* GPIOx, uint32_t Pin,GPIOMode_TypeDef Mode, GPIOOType_TypeDef OType, GPIOPuPd_TypeDef PuPd)
{
	GPIO_InitTypeDef gpio;
	RCC->AHB1ENR |= (1 << ((u32)GPIOx - GPIOA_BASE) / (GPIOB_BASE - GPIOA_BASE));
	gpio.GPIO_Pin = Pin;
	gpio.GPIO_Mode = Mode;
	gpio.GPIO_OType = OType;
	gpio.GPIO_PuPd = PuPd;
	gpio.GPIO_Speed = GPIO_Fast_Speed;
	GPIO_Init(GPIOx,&gpio);
}
