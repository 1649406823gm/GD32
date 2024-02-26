#ifndef __DELAY_H
#define __DELAY_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "main.h"

// 自定义延时函数,基于DWT
void dwt_delay_config(void);
void dwt_delay_us(__IO uint32_t us);
void dwt_delay_ms(__IO uint32_t ms);

#define USE_DWT_DELAY 1

#ifdef __cplusplus
}
#endif

#endif