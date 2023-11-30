/*
 * ################################
 * Ex6_Swap_Two_Numbers.c
 *      Project:Swap Two Numbers.
 *      Created on: Nov 28, 2023
 *      Author:Slim benhammouda.
 * ################################
 */
#include<stdio.h>
int main()
{
	float num1,num2,swap;
	printf("Enter value of a:");
	fflush(stdin); fflush(stdout);
	scanf("%f",&num1);
	printf("\nEnter value of b:");
	fflush(stdin); fflush(stdout);
	scanf("%f",&num2);
	swap=num1;
	num1=num2;
	num2=swap;
	printf("After swapping, value of a =%f",num1);
	printf("\nAfter swapping, value of b =%f",num2);
	return 0 ;
}




