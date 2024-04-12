

typedef volatile unsigned int vuint32_t;

#include"stdint.h"
/* registers base address */
#define RCC_BASE 			0x40021000
#define GPIOA_BASE 			0x40010800

#define RCC_APB2ENR 		*((vuint32_t*) (RCC_BASE + 0x18))
#define GPIOA_CRH 			*((vuint32_t*) (GPIOA_BASE + 0x04))
#define GPIOA_ODR 			*((vuint32_t*) (GPIOA_BASE + 0x0C))
/* bit fields*/
#define RCC_IOPAEN	(1<<2)
#define GPIOA_Pin13	(1UL<<13)

typedef union {
	vuint32_t All_Fields;
	struct {
		vuint32_t reserved:13;
		vuint32_t p_13:1;
	}pin;
}R_ODR_t;

volatile R_ODR_t* R_ODR = (volatile R_ODR_t*)(GPIOA_BASE + 0x0C);

int main(void)
{
	RCC_APB2ENR |= RCC_IOPAEN;
	GPIOA_CRH &= 0xff0fffff;
	GPIOA_CRH |= 0x00200000;
	int i;

	while(1)
	{
		R_ODR->pin.p_13 = 1;
		for(i = 0 ;i < 5000 ; i++);


		R_ODR->pin.p_13 = 0;
		for(i = 0 ;i < 5000 ; i++);
	}

	return 0;
}