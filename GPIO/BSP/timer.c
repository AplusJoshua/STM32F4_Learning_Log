#include "timer.h"

/**
  * @brief	以微秒为单位返回系统时间
  */
uint32_t micros(void)
{
	register uint32_t ms, cycle_cnt;
	do{
		ms = sysTickUptime;
		cycle_cnt = SysTick->VAL;
	}while(ms != sysTickUptime);
	return (ms * 1000) + (usTicks * 1000 - cycle_cnt) / usTicks;
}

/**
  * @brief	微秒级延时
  */
void delay_us(uint32_t us)
{
	uint32_t now = micros();
	while(micros() - now < us);
}

/**
  * @brief	毫秒级延时
  */
void delay_ms(uint32_t ms)
{
	while(ms--)
		delay_us(1000);
}
/**
  * @brief	以毫秒为单位返回系统时间
  */
uint32_t millis(void)
{
	return sysTickUptime;
}
