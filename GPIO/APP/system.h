#ifndef _SYSTEM_H_
#define	_SYSTEM_H_

#include "stm32f4xx.h"
#include "stm32f4xx_it.h"
#include <stdio.h>
#include "stdbool.h"
#include "stdlib.h"
#include "stdarg.h"
#include "string.h"
#include "my_math.h"

#include "timer.h"
#include "gpio.h"

#define usTicks 168

void Parameter_Init(void);
void systemInit(void);
void Loop(void);

#endif 
