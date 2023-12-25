/*#####################################################
 *      Project: Reverse digits in number.
 *      Created on: Dec 25, 2023
 *      Author: Slim benhammouda
 *#####################################################
 */
#include<stdio.h>
void reverse(int x)
{
	if(x!=0)
	{
		printf("%d",x%10);
		fflush(stdout);
		reverse(x/10);
	}
}
int main()
{
	int n;
	printf("Enter a number : ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&n);
	printf("After reversing the number is : ");
	reverse(n);
	return 0;
}

