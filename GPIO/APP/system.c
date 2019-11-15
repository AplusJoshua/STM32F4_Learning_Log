#include "system.h"

/**
  * @brief	参数初始化函数
  */
void Parameter_Init(void)
{
	
}

/**
  * @brief	系统初始化函数
  */
void systemInit(void)
{
    SysTick_Config(SystemCoreClock / 1000);								//滴答定时器配置，1ms
}

/**
  * @brief	主循环函数
  * @note	根据时间戳来周期做相应的事情
  */
uint32_t i = 0;

void Loop(void)
{	
	static uint32_t currentTime = 0;
	static uint32_t loopTime_2ms = 0;
	static uint32_t loopTime_20ms = 0;
  
	
	currentTime = micros();												//获取当前系统时间

	if((int32_t)(currentTime - loopTime_2ms) >= 0)
	{			
		loopTime_2ms = currentTime + 2000;				//2ms
		i++;
	}

	if((int32_t)(currentTime - loopTime_20ms) >= 0)
	{			
		loopTime_20ms = currentTime + 20000;							//20ms
	}
}
