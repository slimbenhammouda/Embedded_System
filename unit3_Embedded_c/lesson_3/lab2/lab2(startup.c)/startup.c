// startup.c 
// eng slim benhammouda
#include <stdint.h>
typedef unsigned int unint32_t ;
extern unsigned int _stack_top;
extern int main();
extern unint32_t _E_text_ ;
extern unint32_t _S_DATA_ ;
extern unint32_t _E_DATA_ ;
extern unint32_t _S_BSS_ ;
extern unint32_t _E_BSS_ ;
void reset_handler();
void default_handller ()
{
	reset_handler();
}
void NMI_handler () __attribute__((weak,alias("default_handller")));;
void h_fault_handler () __attribute__((weak,alias("default_handller")));;
void MM_fault_handler () __attribute__((weak,alias("default_handller")));;
void run_handler () __attribute__((weak,alias("default_handller")));;
void usage_fault_handler () __attribute__((weak,alias("default_handller")));;


unint32_t vectors[] __attribute__((section(".vectors"))) = {
(unint32_t) &_stack_top,
(unint32_t) &reset_handler,
(unint32_t) &NMI_handler,
(unint32_t) &h_fault_handler,
(unint32_t) &MM_fault_handler,
(unint32_t) &run_handler,
(unint32_t) &usage_fault_handler
};
void reset_handler()
{
	int i;
 unint32_t DATA_size = (unsigned char*)&_E_DATA_ - (unsigned char*)&_S_DATA_ ;
unsigned char* p_src=(unsigned char*)&_E_text_ ;
unsigned char* p_dst=(unsigned char*)&_S_DATA_ ;
for(i=0 ;i<DATA_size;i++)
{
   *((unsigned char*)p_dst++)=*((unsigned char*)p_src++);
}
unint32_t BSS_size = (unsigned char*)&_E_BSS_ - (unsigned char*)&_S_BSS_ ;
p_dst=(unsigned char*)&_S_BSS_;
for(i=0 ;i<BSS_size;i++)
{
   *((unsigned char*)p_dst++)=(unsigned char)0;
}
main();
}