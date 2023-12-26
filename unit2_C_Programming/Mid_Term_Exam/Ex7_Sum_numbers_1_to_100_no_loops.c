/*###########################################
 *  Project:Sum numbers 1 to 100 no loops.
 *  Created on: Dec 26, 2023
 *  Author: Slim benhammouda
 *###########################################
 */
#include<stdio.h>
int sum(int x)
{
	int s=0;
	if(x>0)
		s=x+sum(x-1);
	else
		return 0;
	return s;
}
int main()
{
	printf("The sum of numbers from 1===>100 = %d",sum(100));
	return 0;
}

