

void TIM16_IRQHandler(void)
{
if (LL_TIM_IsActiveFlag_UPDATE(TIM16)) {
	LL_TIM_ClearFlag_UPDATE(TIM16);	
// 10us
	delay_10us_cnt++;	
}
}


void TIM17_IRQHandler(void)
{
if (LL_TIM_IsActiveFlag_UPDATE(TIM17)) {
	LL_TIM_ClearFlag_UPDATE(TIM17);	
// 1ms
	delay_1ms_cnt++;

}
}






void TIM1_CC_IRQHandler(void)
{
    if (LL_TIM_IsActiveFlag_CC2(TIM1))
    {
        LL_TIM_ClearFlag_CC2(TIM1); //
        LL_TIM_OC_SetCompareCH2(TIM1,servo_deger);//servo deger= 520= 0 derece ----- 3000=180 derece

    }
}

