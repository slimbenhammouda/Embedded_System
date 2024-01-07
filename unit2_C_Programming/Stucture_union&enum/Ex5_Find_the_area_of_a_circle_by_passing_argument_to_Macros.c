/*###################################################################
 *  Project:Find the area of a circle by passing argument to Macros.
 *  Created on: Jan 7, 2024
 *  Author:Slim benhammouda
 *###################################################################
 */
#include<stdio.h>
#define PI 3.1415
#define area(x)(PI*(x)*(x))
int main()
{
	float radius;
	printf("Enter the radius: ");
	fflush(stdout);
	scanf("%f",&radius);
	printf("Area= %.2f",area(radius));
	return 0;
}
