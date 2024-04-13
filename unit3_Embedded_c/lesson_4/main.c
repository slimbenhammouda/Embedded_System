// cortex m4 tiva c 
//eng slim benhammouda
#define sysCTL_RCGC2_R (*((volatile unsigned long*)0x400FE108))
#define GPIO_PORTF_DIR_R (*((volatile unsigned long*)0x40025400))
#define GPIO_PORTF_DEN_R  (*((volatile unsigned long*)0x4002551C))
#define GPIO_PORTF_DATA_R  (*((volatile unsigned long*)0x400253FC))

int main()
{
	volatile unsigned long delay_cont;
    sysCTL_RCGC2_R = 0x20;
// delay to make sure gpiof is up and running .
   for(delay_cont = 0 ; delay_cont < 2000 ; delay_cont++);
   GPIO_PORTF_DIR_R |= 1<<3 ;
   GPIO_PORTF_DEN_R |= 1<<3 ;
   while(1)
   {
   	GPIO_PORTF_DATA_R |= 1<<3 ;
    for(delay_cont = 0 ; delay_cont < 20000 ; delay_cont++);
    GPIO_PORTF_DATA_R &= ~(1<<3) ;
    for(delay_cont = 0 ; delay_cont < 20000 ; delay_cont++);
   }
   return 0 ;
 
}