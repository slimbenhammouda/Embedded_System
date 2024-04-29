/*
 * lifo.h
 *
 *  Created on: Mar 28, 2024
 *      Author: slim benhammouda
 */

#ifndef LIFO_H_
#define LIFO_H_


#include"stdio.h"
#include"stdlib.h"
#include"stdint.h"

#define print_plus(...) {fflush(stdout);fflush(stdin); \
	                    printf(__VA_ARGS__); \
	                    fflush(stdout);fflush(stdin);}

                          /*******************************
                              user configurations
                          *******************************/
#define width1 5                        //creat buffer
#define element_type uint32_t           //select the element type (uint8_t , uint16_t ,uint32_t ...)


                      /*******************************
                            data type definitions.
                       ******************************/
typedef struct {
	unsigned int length;
	unsigned int count;
	element_type* base;
	element_type* head;

}LIFO_BUFF_t;
typedef enum {
	LIFO_no_error,
	LIFO_full,
	LIFO_empty,
	LIFO_null
}LIFO_status;
                       /************************************
                                APIs prototypes
					              ************************************/


LIFO_status LIFO_Add_item(LIFO_BUFF_t* lifo_buff ,element_type item);
LIFO_status LIFO_get_item(LIFO_BUFF_t* lifo_buff ,element_type* item);
LIFO_status LIFO_init(LIFO_BUFF_t* lifo_buff ,element_type* buff,unsigned int length);


#endif /* LIFO_H_ */
