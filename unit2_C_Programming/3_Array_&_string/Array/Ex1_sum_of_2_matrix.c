/*#################################################
 *      Project:sum of 2 matrix.
 *      Created on: Dec 9, 2023 
 *      Author:slim benhammouda
 *#################################################
 */

#include<stdio.h>
int main()
{
	int i,j ;
	float a[2][2];
	float b[2][2];
	printf("Enter the elements of 1st matrix :\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter a%d%d:",i+1,j+1);
			fflush(stdin); fflush(stdout);
			scanf("%f",&a[i][j]);
		}
	}
	printf("Enter the elements of 2nd matrix :\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter b%d%d:",i+1,j+1);
			fflush(stdin); fflush(stdout);
			scanf("%f",&b[i][j]);
		}
	}
	printf("sum of matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			a[i][j]+=b[i][j];
			printf("%.1f     ",a[i][j]);
		}
		printf("\n");
	}
	return 0 ;
}
