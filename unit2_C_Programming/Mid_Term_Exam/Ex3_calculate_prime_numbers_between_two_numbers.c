/*##############################################################
 *      Project:calculate prime numbers between two numbers.
 *      Created on: Dec 25, 2023
 *      Author:Slim benhammouda
 *##############################################################
 */
#include<stdio.h>
void prime(int x ,int y)
{
	int j,i,indx=0;
	for(i=x;i<=y;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
				indx+=1;
		}
		if(indx==2)
			printf("%d ",i);
		indx=0;
	}
}
int main()
{
	int n1,n2;
	printf("Enter two numbers :");
	fflush(stdout);fflush(stdin);
	scanf("%d %d",&n1,&n2);
	printf("The prime numbers between %d and %d = ",n1,n2);
	prime(n1,n2);
	return 0;
}


