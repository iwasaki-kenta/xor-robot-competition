#ifndef __TICKS_H
#define __TICKS_H

#include "stm32f10x_tim.h"

#define TICKS_TIM							TIM2
#define TICKS_RCC							RCC_APB1Periph_TIM2
#define TICKS_IRQn						TIM2_IRQn
#define TICKS_IRQHandler			void TIM2_IRQHandler(void)

extern volatile u16 ticks;

u16 get_ms_ticks(void);
void ticks_init(void);

void simple_delay1_ms();

#endif
