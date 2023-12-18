/*################################################################
 *      Project:Calculate factorial of a number using recursion.
 *      Created on: Dec 18, 2023
 *      Author:Slim benhammouda
 *################################################################
 */

#include<stdio.h>
long int factorial(int x)
{
	return x>1?(x*factorial(x-1)):1 ;
}
int main()
{
	int n;
	printf("Enter a positive integer: ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&n);
    printf("Factorial of %d = %ld",n,factorial(n));
    fflush(stdout);
	return 0 ;
}
