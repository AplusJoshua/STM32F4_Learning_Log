#include "system.h"

bool Flag=1;
/**
  * @brief	main函数，程序入口
  * @note	先初始化各个东西然后while(1)loop函数
  */
int main(void)
{
	//LED程序
	
	systemInit();
	GPIO_config(GPIOF, GPIO_Pin_9 |GPIO_Pin_10, GPIO_Mode_OUT, GPIO_OType_PP, GPIO_PuPd_UP);
	LED_YELLOW_ON();
	LED_RED_OFF();
//	GPIO_ResetBits(GPIOF, GPIO_Pin_9 | GPIO_Pin_10);
	
//	while(1)
//	{
//		/*Press*/
//		if (GPIO_ReadInputDataBit(GPIOE, GPIO_Pin_4) && Flag)
//		{
//			delay_ms(1);
//			Flag=0;
//			GPIO_ToggleBits(GPIOF, GPIO_Pin_9 | GPIO_Pin_10);
//		}
//		if (GPIO_ReadInputDataBit(GPIOE, GPIO_Pin_4)==0)
//		{
//			delay_ms(1);
//			Flag=1;
//		}
//		
//		Loop();
//	}
}

/**
  * @brief
  * @param
  * @retval
  * @note
  */
