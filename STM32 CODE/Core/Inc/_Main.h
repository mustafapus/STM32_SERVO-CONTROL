#include "_Set_Timers.h"


 delay_1ms(20);
 delay_1ms(20);


 LL_TIM_CC_EnableChannel(TIM1, LL_TIM_CHANNEL_CH2);
 LL_TIM_EnableAllOutputs(TIM1);
 NVIC_SetPriority(TIM1_CC_IRQn, 0);
 NVIC_EnableIRQ(TIM1_CC_IRQn);
 LL_TIM_EnableIT_CC2(TIM1);
// LL_TIM_DisableAllOutputs(TIM1);
 //LL_TIM_CC_DisableChannel(TIM1, LL_TIM_CHANNEL_CH2);




 NVIC_SetPriority(SysTick_IRQn, 3);
 NVIC_SetPriority(TIM16_IRQn, 3);
 NVIC_SetPriority(TIM17_IRQn, 3);







