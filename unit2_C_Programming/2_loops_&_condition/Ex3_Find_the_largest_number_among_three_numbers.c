/*
 * ##########################################################
 * Ex3_Find_the_largest_number_among_three_numbers.c
 *      Project:Find the largest number among three numbers.
 *      Created on: Nov 28, 2023
 *      Author:Slim benhammouda.
 * ##########################################################
 */
#include<stdio.h>
int main()
{
	float num1,num2,num3;
	printf("Enter three numbers:");
	fflush(stdin); fflush(stdout);
	scanf("%f %f %f",&num1,&num2,&num3);
	if(num1<num2)
	{
		if(num2<num3)
			printf("the largest number is:%f",num3);
		else printf("the largest number is:%f",num2);
	}
	else
	{
		if(num1<num3)
			printf("the largest number is:%f",num3);
		else printf("the largest number is:%f",num1);
	}

	return 0 ;
}




