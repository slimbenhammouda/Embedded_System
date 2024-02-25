/*
############################################################
                      
                     Project:toggle_led
                     
                     Author:slim benhammouda

############################################################                     
*/


typedef volatile unsigned int vuint32_t;
#define RCC_BASE 0x40021000
#define GPIOA_BASE 0x40010800

#define RCC_APB2ENR *(volatile unsigned int *)(RCC_BASE + 0x18)
#define GPIO_CRH    *(volatile unsigned int *)(GPIOA_BASE + 0x04)
#define GPIO_DOR    *(volatile unsigned int *)(GPIOA_BASE + 0x0C)
#define RCC_IOPAEN (1<<2)
//#define GPIOA13    (1)

typedef union{
	vuint32_t all_fields;
	struct{
		vuint32_t reserved:13;
		vuint32_t p_13:1;
	}pin;
}R_ODR_t;
volatile R_ODR_t* R_ODR = (volatile R_ODR_t*)(GPIOA_BASE + 0x0C);
int main()
{
	RCC_APB2ENR |= RCC_IOPAEN;
	GPIO_CRH &= 0xFF0FFFFF;
	GPIO_CRH |= 0x00200000;
	while(1)
	{
		R_ODR->pin.p_13=1;
		for( int i=0;i<5000;i++);
		R_ODR->pin.p_13=0;
		for(int i=0;i<5000;i++);
	}
	return 0;
}
