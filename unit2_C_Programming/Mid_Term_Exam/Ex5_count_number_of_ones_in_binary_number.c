/*######################################################
 *      Project:count number of ones in binary number.
 *      Created on: Dec 25, 2023
 *      Author: Slim benhammouda
 *######################################################
 */
#include<stdio.h>
int n_ones(int x)
{
	int i,count=0;
	for(i=31;i>=0;i--)
	{
		if((x>>i)&1)
			count+=1;
	}
	return count;
}
int main()
{
	int n;
	printf("Enter a number: ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&n);
	printf("the number of ones in %d (binary) is : %d",n,n_ones(n));
	return 0;
}

