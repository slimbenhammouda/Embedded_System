/*#################################################
 *      Project:insert an element in an array.
 *      Created on: Dec 9, 2023
 *      Author:slim benhammouda
 *#################################################
 */
#include<stdio.h>
int main()
{
	int i,num,location,ins;
	int arr[100];
	printf("Enter no of elements : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		arr[i]=i+1;
		printf("%d ",arr[i]);
	}
	printf("\nEnter the element to be inserted : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&ins);
	printf("Enter the location : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&location);
	for(i=num;i>=location;i--)
		arr[i]=arr[i-1];
	arr[location-1]=ins;
	for(i=0;i<=num;i++)
		printf("%d ",arr[i]);
	return 0 ;
}

