/*##################################################
 *      Project:prime numbers in a given interval.
 *      Created on: Dec 17, 2023
 *      Author: Slim benhammouda
 *##################################################
 */
#include<stdio.h>
void check_prime(int x,int y)
{
	int i,j,c;
	for(i=x+1;i<y;i++)
	{
		c=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
		    	c+=1;
		}
		if(c==2)
			printf("%d ",i);
	}
}
int main()
{
	int min,max;
	printf("Enter min of interval :");
	fflush(stdout);fflush(stdin);
	scanf("%d",&min);
	printf("Enter max of interval :");
	fflush(stdout);fflush(stdin);
	scanf("%d",&max);
	while(min>max)
	{
		printf("Enter min of interval :");
		fflush(stdout);fflush(stdin);
		scanf("%d",&min);
		printf("Enter max of interval :");
		fflush(stdout);fflush(stdin);
		scanf("%d",&max);
	}
	printf("Prime numbers between %d and %d are :",min,max);
	check_prime(min,max);
	return 0 ;
}

