/*
 * main.c
 *
 *  Created on: Mar 28, 2024
 *      Author: slim benhammouda
 */

#include"lifo.h"
element_type buffer1[width1];
//element_type buffer2[5];

int main()
{
	unsigned int i;
	unsigned int temp=0;
	LIFO_BUFF_t uart_lifo,i2c_lifo;
	//static allocation
	LIFO_init(&uart_lifo,buffer1,5);
	//dynamic allocation
	//element_type* buffer2=(element_type*)malloc(5*sizeof(unsigned intelement_type));
	//LIFO_init(&i2c_lifo,buffer2,5);

	for(i=0;i<5;i++)
		if (LIFO_Add_item(&uart_lifo,i) == LIFO_no_error)
		{
			print_plus("uart_lifo add : %d \n",i);
		}
	print_plus("\n******************\n\n")
	for(i=0;i<5;i++)
		if (LIFO_get_item(&uart_lifo,&temp) == LIFO_no_error)
		{
			print_plus("uart_lifo get : %d \n",temp);
		}
	return 0 ;

}


