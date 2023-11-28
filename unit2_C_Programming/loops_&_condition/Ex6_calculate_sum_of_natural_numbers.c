/*
 *#################################################
 *      project:calculate sum of natural numbers.
 *      Created on: Nov 26, 2023
 *      Author:Slim benhammouda.
 *#################################################
 */
#include<stdio.h>
int main()
{
	int i,n,sum=0 ;
	printf("Enter an integer:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	printf("sum=%d",sum);
	return 0 ;
}



