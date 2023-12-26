/*###########################################
 *  Project:reverse elements of an array.
 *  Created on: Dec 26, 2023
 *  Author: Slim benhammouda
 *###########################################
 */
#include<stdio.h>
void reverse(int arr[],int size)
{
	int i;
	printf("After reversing the array===> ");
	for(i=size-1;i>=0;i--)
		printf("%d ",arr[i]);
}
int main()
{
	int arr[100],size,i;
	printf("Enter size of array: ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&size);
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	reverse(arr,size);
	return 0;
}
