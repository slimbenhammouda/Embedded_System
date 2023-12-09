/*
 * ####################################################
 * Ex7_Swap_Two_Numbers_without_temp_variable.c
 *      Project:Swap Two Numbers without temp variable.
 *      Created on: Nov 28, 2023 
 *      Author:Slim benhammouda.
 * ####################################################
 */
#include<stdio.h>
int main()
{
	float num1,num2;
	printf("enter value of a:");
	fflush(stdin); fflush(stdout);
	scanf("%f",&num1);
	printf("enter value of b:");
	fflush(stdin); fflush(stdout);
	scanf("%f",&num2);
	num1+=num2;
	num2=num1-num2;
	num1-=num2;
	printf("After swapping, value of a =%f",num1);

	printf("\nAfter swapping, value of b =%f",num2);
	return 0 ;
}




