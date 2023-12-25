/*#####################################################
 *      Project:calculate the square root of a number.
 *      Created on: Dec 25, 2023
 *      Author:Slim benhammouda
 *#####################################################
 */
#include <stdio.h>
float square_root(float x)
{
	int i = 0;
	float step =.0001 , sr = 0;
	for (i = 0; i<x/2; i++)
	{
		while (sr * sr <= x)
		{
			sr += step;
		}
	}
	return sr ;
}

int main()
{
	float n;
	printf("Enter a number : ");
	fflush(stdin);  fflush(stdout);
	scanf("%f",&n);
	printf("The square root of %.2f is : %.3f",n,square_root(n));
	return 0;
}
