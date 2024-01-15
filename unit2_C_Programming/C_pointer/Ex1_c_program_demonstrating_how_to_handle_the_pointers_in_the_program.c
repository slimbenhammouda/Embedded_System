/*##################################################################################
 *    Project:c program demonstrating how to handle the pointers in the program.
 *    Created on: Jan 10, 2024
 *    Author:Slim benhammouda
 *##################################################################################
 */
#include<stdio.h>
int main()
{
	int m=29;
	int*ab;
	ab=&m;
	printf("Address of m : %p\n",&m);
	printf("Value of m : %d\n\n",m);
	printf("Now ab is assigned with the address of m.\n");
	printf("Address of pointer ab : %p\n",ab);
	printf("Content of pointer ab : %d\n\n",*ab);
	printf("The value of m assigned to 34 now.\n");
	m=34;
	printf("Address of pointer ab : %p\n",ab);
	printf("Content of pointer ab : %d\n\n",*ab);
	printf("The pointer variable ab is assigned with the value 7 now.\n");
	*ab=7;
	printf("Address of m : %p\n",&m);
	printf("Value of m : %d",m);
	return 0;
}
