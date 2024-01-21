#include "stm32f4xx.h"                  // Device header
#include "delay.h"
#include "led.h"
void key_init(void)
	{
   RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD,ENABLE);
   GPIO_InitTypeDef GPIO_InitStructure;
    
   GPIO_InitStructure.GPIO_Pin   = GPIO_Pin_3 |GPIO_Pin_4;
    GPIO_InitStructure.GPIO_Mode  = GPIO_Mode_IN;
    GPIO_InitStructure.GPIO_Speed = GPIO_High_Speed;
    GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
    GPIO_InitStructure.GPIO_PuPd  = GPIO_PuPd_UP;
	  GPIO_Init(GPIOD, &GPIO_InitStructure);  
}


  void key_get_number(uint8_t* KeyNumber)
		
	{
	
	if(GPIO_ReadInputDataBit(GPIOD, GPIO_Pin_3)==0){
	 delay_ms(20);
		while(GPIO_ReadInputDataBit(GPIOD, GPIO_Pin_3)==0);
		delay_ms(20);
		*KeyNumber=1;
	}
		if(GPIO_ReadInputDataBit(GPIOD, GPIO_Pin_4)==0){
	 delay_ms(20);
		while(GPIO_ReadInputDataBit(GPIOD, GPIO_Pin_4)==0);
		delay_ms(20);
		*KeyNumber=2;
		
	}
	
		
	
}