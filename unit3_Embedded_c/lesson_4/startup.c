// startup.c 
// eng slim benhammouda
typedef unsigned int unint32_t ;
static unsigned long stack_top[256];
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

 void (*const g_p_fun_vectors[])()__attribute__((section(".vectors"))) =
 {
 	(void(*)()) ((unsigned long)stack_top + sizeof(stack_top)),
 	 &reset_handler,
    &NMI_handler,
    &h_fault_handler
 };
void reset_handler()
{
	int i;
 unint32_t DATA_size = (unsigned char*)&_E_DATA_ - (unsigned char*)&_S_DATA_ ;
unsigned char* p_src = (unsigned char*)&_E_text_ ;
unsigned char* p_dst = (unsigned char*)&_S_DATA_ ;
for(i=0 ;i<DATA_size;i++)
   *((unsigned char*)p_dst++)=*((unsigned char*)p_src++);
unint32_t BSS_size = (unsigned char*)&_E_BSS_ - (unsigned char*)&_S_BSS_ ;
p_dst = (unsigned char*)&_S_BSS_;
for(i=0 ;i<BSS_size;i++)
   *((unsigned char*)p_dst++) = (unsigned char)0;
main();
}