/*#################################################
 *      Project: calculate average using arrays.
 *      Created on: Dec 9, 2023
 *      Author:slim benhammouda
 *#################################################
 */
#include<stdio.h>
int main()
{
	int n,i;
	float data[100];
	float Average;
	printf("Enter the number of data: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	for(i=0,Average=0;i<n;i++)
	{
		printf("%d. Enter number:",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%f",&data[i]);
		Average+=data[i];
	}
	printf("Average =%.2f",Average/n);
	return 0 ;
}

