/*
################################################
     project: GPIO.c
     Created on: Sep 1, 2024
     Author: eng.Slim Benhammouda
################################################
 */
#include "GPIO.h"
void Delay(int nCount)
{
	for(; nCount != 0; nCount--);
}

int getPressureVal(void){
	return (GPIOA_IDR & 0xFF);
}

void Set_Alarm_actuator(uint32_t i){
	if (i == 1){
		RESET_BIT(GPIOA_ODR,13);
	}
	else if (i == 0){
		SET_BIT(GPIOA_ODR,13);

	}
}

void GPIO_INIT (void){
	SET_BIT(APB2ENR, 2);
	GPIOA_CRL &= 0xFF0FFFFF;
	GPIOA_CRL |= 0x00000000;
	GPIOA_CRH &= 0xFF0FFFFF;
	GPIOA_CRH |= 0x00200000;
}
