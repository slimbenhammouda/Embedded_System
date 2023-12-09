/*#################################################
 *      Project:find transpose of a matrix.
 *      Created on: Dec 9, 2023
 *      Author:slim benhammouda
 *#################################################
 */
#include<stdio.h>
int main()
{
	int i,j,n_rows,n_column;
	int a[100][100];
	printf("Enter rows and column of matrix:");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&n_rows,&n_column);
	printf("Enter elements of matrix:\n");
	for(i=0;i<n_rows;i++)
	{
		for(j=0;j<n_column;j++)
		{
			printf("Enter elements a%d%d:",i+1,j+1);
			fflush(stdin); fflush(stdout);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Entred matrix:\n");
	for(i=0;i<n_rows;i++)
	{
		for(j=0;j<n_column;j++)
		{
			printf("%d    ",a[i][j]);
		}
		printf("\n");
	}
	printf("transpose of matrix:\n");
	for(i=0;i<n_column;i++)
	{
		for(j=0;j<n_rows;j++)
		{
			printf("%d    ",a[j][i]);
		}
		printf("\n");
	}
	return 0 ;
}

