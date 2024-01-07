/*###################################################
 *  Project:Add two distances (inch_feet) system.
 *  Created on: Jan 6, 2024
 *  Author:Slim benhammouda
 *###################################################
 */
#include<stdio.h>
struct distance
{
	int feet;
	float inch;
};
int main()
{
	struct distance d1,d2,sum;
	printf("Enter information for 1st distance:\n");
	fflush(stdout);
	printf("Enter feet: ");
	fflush(stdout);
	scanf("%d",&d1.feet);
	printf("Enter inch: ");
	fflush(stdout);
	scanf("%f",&d1.inch);
	printf("\nEnter information for 2nd distance:\n");
	fflush(stdout);
	printf("Enter feet: ");
	fflush(stdout);
	scanf("%d",&d2.feet);
	printf("Enter inch: ");
	fflush(stdout);
	scanf("%f",&d2.inch);
	sum.feet=d1.feet+d2.feet;
	sum.inch=d1.inch+d2.inch;
	if(sum.inch>12.0)
	{
		sum.feet+=1;
		sum.inch-=12.0;
	}
	printf("\nSum of distances= %d\'-%.1f\"",sum.feet,sum.inch);
	fflush(stdout);
	return 0;

}

