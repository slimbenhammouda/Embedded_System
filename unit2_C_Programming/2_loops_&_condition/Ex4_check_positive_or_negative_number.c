/*
 * ###################################################
 * Ex4_check_positive_or_negative_number.c
 *      project:check_positive_or_negative_number.
 *      Created on: Nov 28, 2023
 *      Author:Slim benhammouda.
 * ###################################################
 */
#include<stdio.h>
int main()
{
	float num;
	printf("Enter a number:");
	fflush(stdin); fflush(stdout);
	scanf("%f",&num);
	if(num>=0)
		printf("%f is positive",num);
	else printf("%f is negative",num);
	return 0 ;
}




