
#include "led.h"  

#include "bee.h"  



void LED_Init(void)
{		
	GPIO_InitTypeDef GPIO_InitStructure; //∂®“ÂΩ·ππÃÂ
	RCC_AHB1PeriphClockCmd ( LED1_CLK, ENABLE); 	//≥ı ºªØGPIOG ±÷”	
	RCC_AHB1PeriphClockCmd ( LED2_3_CLK, ENABLE); 	//≥ı ºªØGPIOG ±÷”	
	GPIO_InitStructure.GPIO_Mode  = GPIO_Mode_OUT;   // ‰≥ˆƒ£ Ω
	GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;  //Õ∆ÕÏ ‰≥ˆ
	GPIO_InitStructure.GPIO_PuPd  = GPIO_PuPd_UP;	//…œ¿≠
	GPIO_InitStructure.GPIO_Speed =  GPIO_Speed_50MHz; //ÀŸ∂»—°‘
	//≥ı ºªØ LED1 “˝Ω≈
	GPIO_InitStructure.GPIO_Pin = LED1_PIN;	 
	GPIO_Init(LED1_PORT, &GPIO_InitStructure);	
	
	GPIO_InitStructure.GPIO_Mode  = GPIO_Mode_OUT;   // ‰≥ˆƒ£ Ω
	GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;  //Õ∆ÕÏ ‰≥ˆ
	GPIO_InitStructure.GPIO_PuPd  = GPIO_PuPd_UP;	//…œ¿≠
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz; //ÀŸ∂»—°?
	GPIO_InitStructure.GPIO_Pin = LED2_PIN|LED3_PIN;	 
	GPIO_Init(LED2_3_PORT, &GPIO_InitStructure);	
  LED1_OFF;
	LED2_OFF;
	LED3_OFF;
}

void led_red_turn(void){
     if(GPIO_ReadOutputDataBit(GPIOD,GPIO_Pin_14)==0){GPIO_SetBits(GPIOD, GPIO_Pin_14);}
		 else{GPIO_ResetBits(GPIOD, GPIO_Pin_14);}
}