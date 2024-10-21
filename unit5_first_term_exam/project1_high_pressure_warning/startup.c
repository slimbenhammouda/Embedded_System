/*
################################################
     project: startup.c
     Created on: Sep 1, 2024
     Author: eng.Slim Benhammouda
################################################
 */
#include<stdint.h>
void reset_handler(void);

extern int main(void);

extern uint32_t _stack_top;
extern uint32_t _E_text_;
extern uint32_t _S_DATA_;
extern uint32_t _E_DATA_;
extern uint32_t _S_BSS_;
extern uint32_t _E_BSS_;


void default_handler(void);
void default_handler(void)
{
	reset_handler();
}
void NMI_handler ()          __attribute__((weak,alias("default_handler")));;
void h_fault_handler ()      __attribute__((weak,alias("default_handler")));;
void MM_fault_handler ()     __attribute__((weak,alias("default_handler")));;
void run_handler ()          __attribute__((weak,alias("default_handler")));;
void usage_fault_handler ()  __attribute__((weak,alias("default_handler")));;


uint32_t vectors[] __attribute__((section(".vectors"))) = {
(uint32_t) &_stack_top,
(uint32_t) &reset_handler,
(uint32_t) &NMI_handler,
(uint32_t) &h_fault_handler,
(uint32_t) &MM_fault_handler,
(uint32_t) &run_handler,
(uint32_t) &usage_fault_handler
};
void reset_handler()
{
	int i;
 uint32_t DATA_size = (uint8_t*)&_E_DATA_ - (uint8_t*)&_S_DATA_ ;
uint8_t* p_src=(uint8_t*)&_E_text_ ;
uint8_t* p_dst=(uint8_t*)&_S_DATA_ ;
for(i=0 ;i<DATA_size;++i)
{
   *((uint8_t*)p_dst++)=*((uint8_t*)p_src++);
}
uint32_t BSS_size = (uint8_t*)&_E_BSS_ - (uint8_t*)&_S_BSS_ ;
p_dst=(uint8_t*)&_S_BSS_;
for(i=0 ;i<BSS_size;++i)
{
   *((uint8_t*)p_dst++)=(uint8_t)0;
}
main();
}
