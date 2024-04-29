/*
 * fifo.c
 *
 *  Created on: Mar 25, 2024
 *      Author: slim benhammouda
 */
#include"fifo.h"

fifo_buff_status fifo_init(fifo_buff_t* fifo , element_type* buff, uint32_t length)
{
	if(buff == NULL)
		return fifo_null;
	fifo->base = buff;
	fifo->head = buff;
	fifo->tail = buff;
	fifo->length = length;
	fifo->count = 0;
 
	return fifo_no_error;

}
fifo_buff_status fifo_enqueue(fifo_buff_t* fifo , element_type item)
{
	if(!fifo->base || !fifo->head || !fifo->tail)
		return fifo_null;
	if(fifo_is_full(fifo)== fifo_full)
		return fifo_full;
	*(fifo->head) = item;
	fifo->count++;
	// circler fifo
	if(fifo->head == (fifo->base + (fifo->length * sizeof(element_type))))
		fifo->head = fifo->base;
	else
		fifo->head++;
	return fifo_no_error;

}
fifo_buff_status fifo_dequeue(fifo_buff_t* fifo , element_type* item)
{
	// check fifo is null
	if(!fifo->base || !fifo->head || !fifo->tail)
		return fifo_null;
	// check fifo is empty
	if(fifo->count == 0)
		return fifo_empty;
	*item = *(fifo->tail);
	fifo->count--;
	//circler fifo
	if(fifo->tail == (fifo->base + (fifo->length * sizeof(element_type))))
		fifo->tail = fifo->base;
	else
		fifo->tail++;
	return fifo_no_error;

}
fifo_buff_status fifo_is_full(fifo_buff_t* fifo)
{
	if(!fifo->base || !fifo->head || !fifo->tail)
		return fifo_null;
	if(fifo->count == fifo->length)
		return fifo_full;
	return fifo_no_error;
}
void fifo_print(fifo_buff_t* fifo)
{
	element_type* temp;
	int i;
	if(fifo->count == 0)
		printf("fifo is empty \n");
	else
	{
		temp = fifo->tail;
		printf("\n ========== fifo print ==========\n");
		for(i=0;i<fifo->count;i++)
		{
			printf(" \t %x \n",*temp);
			temp++;
		}
		printf("================================\n");
	}

}
