/*#########################################################
 * Project:calculate the power of a number using recursion.
 * Created on: Dec 19, 2023
 * Author:Slim benhammouda
 *#########################################################
 */
#include<stdio.h>
int power(int x,int y)
{
	int p;
	p=y!=0?(x*power(x,y-1)): 1;
	return p ;
}
int main()
{
	int n,exp;
	printf("Enter base number: ");
	fflush(stdout);
	scanf("%d",&n);
	printf("Enter power number (positive integer): ");
	fflush(stdout);
	scanf("%d",&exp);
	printf("%d^%d = %d",n,exp,power(n,exp));
	return 0;
}

