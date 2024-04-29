/*
 * fifo.h
 *
 *  Created on: Mar 25, 2024
 *      Author: slim benhammouda
 */

#ifndef FIFO_H_
#define FIFO_H_

#include"stdio.h"
#include"stdint.h"

//user configuration
//select the element type (uint8_t , uint16_t ,uint32_t ...)
#define element_type uint8_t
//creat buffer1
#define width1 5
element_type uart_buff[width1];

//fifo data type
typedef struct {
	unsigned int length;
	unsigned int count;
	element_type* base;
	element_type* head;
	element_type* tail;
}fifo_buff_t;

typedef enum{
	fifo_no_error,
	fifo_full,
	fifo_empty,
	fifo_null
}fifo_buff_status;

//fifo APIs prototypes

fifo_buff_status fifo_init(fifo_buff_t* fifo , element_type* buff, uint32_t length);
fifo_buff_status fifo_enqueue(fifo_buff_t* fifo , element_type item);
fifo_buff_status fifo_dequeue(fifo_buff_t* fifo , element_type* item);
fifo_buff_status fifo_is_full(fifo_buff_t* fifo);
void fifo_print(fifo_buff_t* fifo);

#endif /* FIFO_H_ */
