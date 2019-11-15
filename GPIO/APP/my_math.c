#include "my_math.h"

/**
  * @brief	int类型限幅
  * @param	amt：要限制的数的指针
  * @param	low：最小值
  * @param	high：最大值
  */
void constrain_int(int *amt, int low, int high)
{
  if (*amt > high)
    *amt = high;
  if (*amt < low)
    *amt = low;
}

/**
  * @brief	float类型限幅
  * @param	amt：要限制的数的指针
  * @param	low：最小值
  * @param	high：最大值
  */
void constrain_float(float *amt, float low, float high)
{
	if (*amt > high)
		*amt = high;
	if (*amt < low)
		*amt = low;
}
/**
  * @brief	short类型限幅
  * @param	amt：要限制的数的指针
  * @param	low：最小值
  * @param	high：最大值
  */
void constrain_short(short *amt, int low, int high)
{
	if (*amt > high)
		*amt = high;
	if (*amt < low)
		*amt = low;
}


/**
  * @brief	float类型的绝对值限幅
  * @param	amt：要限制的数的指针
  * @param	ABS_MAX：限制的绝对值最大值
  */
void fabs_limit(float *amt, float ABS_MAX)
{
	if (*amt > ABS_MAX)
		*amt = ABS_MAX;
	if (*amt < -ABS_MAX)
		*amt = -ABS_MAX;
}


/**
  * @brief	临界值处理
  * @param	get: 传感器反馈值
  * @param	set：输出的设定值
  * @param	mid：中间值
  */
void critical_value_handle(float get, float *set,float mid)
{
	if (*set >= mid)
	{
		if (get > *set - mid)
			*set = *set;
		else
			*set = *set - mid*2;
	}
	else
	{
		if (get > *set + mid)
			*set = *set + mid*2;
		else
			*set = *set;
	}
}

/**
  * @brief	滑动平均滤波器
  * @param	data:要进行滤波的数据
  * @param	num:要去多少次数据的平均
  * @param	filter_out:输出结果要放到的地方
  */
void moving_average_filter(float data,u8 num,float *filter_out)
{
	u8 i;
	float data_buf[num + 1];
	float data_sum = 0;
	
	data_buf[num] = data;
	for(i = 0; i < num; i++) 
	{
		data_buf[i] = data_buf[i + 1];
		data_sum += data_buf[i];
	}
	*filter_out = data_sum / num;
}


