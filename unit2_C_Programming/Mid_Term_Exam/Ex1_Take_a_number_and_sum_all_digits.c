/*#################################################
 *      Project:take a number and sum all digits
 *      Created on: Dec 24, 2023
 *      Author:Slim benhammouda
 *#################################################
 */
#include<stdio.h>
unsigned int sum_digits(unsigned int x)
{
	int r,sum=0;
	if(x!=0)
	{
		r=x%10;
		sum=r+sum_digits(x/10);
	}
	else
		return 0;
	return sum;
}
int main()
{
	unsigned int num ;
	printf("Enter a positive number: ");
	fflush(stdout);fflush(stdin);
	scanf("%u",&num);
	printf("The sum of digits for %u is: %u",num,sum_digits(num));
	return 0 ;
}

