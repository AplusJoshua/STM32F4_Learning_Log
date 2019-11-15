#ifndef _GPIO_H_
#define _GPIO_H_

#include "system.h"

#define LED_YELLOW_ON()		GPIO_ResetBits(GPIOF, GPIO_Pin_9)
#define LED_RED_ON()			GPIO_ResetBits(GPIOF, GPIO_Pin_10)

#define LED_YELLOW_OFF()	GPIO_SetBits(GPIOF, GPIO_Pin_9)
#define LED_RED_OFF()			GPIO_SetBits(GPIOF, GPIO_Pin_10)


void GPIO_config(GPIO_TypeDef* GPIOx, uint32_t Pin,GPIOMode_TypeDef Mode, GPIOOType_TypeDef OType, GPIOPuPd_TypeDef PuPd);

#endif
