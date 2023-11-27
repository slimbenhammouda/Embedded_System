/*
 * ################################################
 * Ex2_Enter_An_integer.c
 *      project: print an integer entred by a user.
 *      Created on: Nov 27, 2023
 *      Author: slim benhammouda
 * ################################################
 */
#include<stdio.h>
int main()
{
	int a;
	printf("enter an integer :");
	fflush(stdin); fflush(stdout);
	scanf("%d",&a);
	printf("you entred: %d",a);
	return 0 ;
}




