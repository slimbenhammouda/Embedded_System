/*
 * #######################################
 * Ex7_find_factorial_of_number.c
 *      Project:find factorial of number.
 *      Created on: Nov 28, 2023
 *      Author:Slim benhammouda.
 * #######################################
 */
#include<stdio.h>
int main()
{
	int i,num;
	unsigned long long Factorial;
	printf("Enter an integer:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	if(num>=0)
	{
		for(i=1,Factorial=1;i<=num;i++)
		{
			Factorial*=i;
		}
		printf("Factorial=%llu",Factorial);
	}
	else printf("Error!!! Factorial of negative number doesn't exist");
	return 0 ;
}




