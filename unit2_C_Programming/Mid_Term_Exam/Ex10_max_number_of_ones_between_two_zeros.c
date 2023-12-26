/*#####################################################
 *     Project:max number of ones between two zeros
 *     Created on: Dec 26, 2023
 *     Author:Slim benhammouda
 *#####################################################
 */
#include<stdio.h>
void max_ones(int x)
{
	int i,cont=0;
	for(i=0;(i<=31)&&(x!=0);i++)
	{
		x=x&(x<<1);
		cont++;
	}
	printf("The max number of ones is: %d",cont);
}
int main()
{
	int n;
	printf("Enter a number: ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&n);
	max_ones(n);
	return 0;
}

