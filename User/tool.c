/**
  ******************************************************************************
  * @file   
  * @author  wufulin
  * @version v1.0
  * @date    2015-11-02
  * @brief   常用的工具类函数
  ******************************************************************************
  * @attention
  *
  *
  ******************************************************************************
  */
#include "tool.h"

/**
  * @brief  简单延时函数
  * @param  
  * @retval 无
  */
void Delay(__IO uint32_t nCount)
{
	for(; nCount != 0; nCount--);
}
/*********************************************END OF FILE**********************/