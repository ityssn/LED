#ifndef _TIM_H_
#define _TIM_H_

#include "sys.h"

void TIM3_Init(u16 arr,u16 psc);//arra:自动重装载值，psc：预分频
void TIM4_Init(u16 arr,u16 psc);
void TIM3_IRQHandler(void);
void TIM4_IRQHandler(void);


#endif
