/*
 * #####################################################
 * Ex1_check_whether_a_number_is_even_or_odd.c
 *      Project:check whether a number is even or odd.
 *      Created on: Nov 28, 2023
 *      Author:Slim benhammouda.
 * #####################################################
 */
#include<stdio.h>
int main()
{
	int num;
	float r;
	printf("Enter an integer you want to check:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	r=num%2;
	if(r==0)
		printf("%d is even",num);
	else
		printf("%d is odd",num);
	return 0 ;
}




