


void delay_1ms(uint32_t num1){
	delay_1ms_cnt=0;
while (delay_1ms_cnt < num1) {asm("NOP");}
}

void delay_10us(uint32_t num1){
	delay_10us_cnt=0;
while (delay_10us_cnt < num1) {asm("NOP");}
}



