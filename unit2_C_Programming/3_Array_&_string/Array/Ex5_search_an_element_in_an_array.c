/*##############################################
 *      Project:search an element in an array.
 *      Created on: Dec 10, 2023
 *      Author:Slim benhammouda.
 *##############################################
 */
#include<stdio.h>
int main()
{
	int i,num,s_num;
	int arr[100];
	printf("Enter no of elements : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	for(i=0;i<num;i++)
		scanf("%d",&arr[i]);
	printf("Enter the elements to be searched : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&s_num);
	for(i=0;i<num;i++)
	{
		if(arr[i]==s_num)
		{
			printf("Number found at the location = %d",i+1);
			break;
		}
	}

	return 0 ;
}

