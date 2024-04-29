/*
 * main.c

 *
 *  Created on: Mar 25, 2024
 *      Author: slim benhammouda
 */

#include"fifo.h"


int main()
{
	fifo_buff_t fifo_uart;
	element_type i , temp=0;
	if(fifo_init(&fifo_uart,uart_buff,5 )== fifo_no_error)
		printf("fifo init ------ done\n");

	for(i=0;i<7;i++)
	{
		printf("fifo enqueue (%x) \n",i);
		if(fifo_enqueue(&fifo_uart,i)== fifo_no_error)
			printf("\t fifo enqueue --------- done \n");
		else
			printf("\t fifo enqueue --------- failed \n");

	}
	fifo_print(&fifo_uart);
	if(fifo_dequeue(&fifo_uart,&temp)== fifo_no_error)
		printf("fifo dequeue %x --------- done \n",temp);
	if(fifo_dequeue(&fifo_uart,&temp)== fifo_no_error)
		printf("fifo dequeue %x --------- done \n",temp);
	fifo_print(&fifo_uart);
	return 0 ;
}

