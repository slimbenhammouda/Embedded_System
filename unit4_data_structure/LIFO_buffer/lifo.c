/*
 * lifo.c
 *
 *  Created on: Mar 28, 2024
 *      Author: slim benhammouda
 */
#include"lifo.h"

LIFO_status LIFO_Add_item(LIFO_BUFF_t* lifo_buff ,element_type item)
{
	//check lifo is valid
	if(!lifo_buff->base || !lifo_buff->head)
		return LIFO_null;
	//check lifo is full
	//if(lifo_buff->head >= (lifo_buff->base+(lifo_buff->length*4)))
	if(lifo_buff->count == lifo_buff->length )
		return LIFO_full;
	*(lifo_buff->head) = item ;
	lifo_buff->head++;
	lifo_buff->count++;
	return LIFO_no_error;
}
LIFO_status LIFO_get_item(LIFO_BUFF_t* lifo_buff ,element_type* item)
{
	//check lifo is valid
	if(!lifo_buff->base || !lifo_buff->head)
		return LIFO_null;
	//check lifo is empty.
	if(lifo_buff->count == 0)
		return LIFO_empty;
	lifo_buff->head--;
	*item = *(lifo_buff->head);
	lifo_buff->count--;

	return LIFO_no_error;

}
LIFO_status LIFO_init(LIFO_BUFF_t* lifo_buff ,element_type* buff,unsigned int length)
{
	if(buff == NULL)
		return LIFO_null;
	lifo_buff->base=buff;
	lifo_buff->head=buff;
	lifo_buff->length=length;
	lifo_buff->count=0;
	return LIFO_no_error;
}


