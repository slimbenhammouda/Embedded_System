#include"uart.h"
unsigned char const string2[100]="learn_in_depth:Slim Benhammouda";
unsigned char string[100]="learn_in_depth:Slim Benhammouda";
static unsigned char string3[100];
void main(void)
{
	uart_send_string(string);
	
}