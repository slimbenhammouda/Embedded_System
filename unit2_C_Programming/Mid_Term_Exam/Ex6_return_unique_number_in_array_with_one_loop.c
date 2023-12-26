/*##########################################################
 *    Project:return unique number in array with one loop.
 *    Created on: Dec 25, 2023
 *    Author:Slim benhammouda
 *##########################################################
 */
#include<stdio.h>
void unique(int arr[],int x)
{
	int i,ref=0;
	for(i=0;i<x;i++)
		ref^=arr[i];
	printf("%d",ref);
}
int main()
{
	int arr[7]={4,2,5,2,5,7,4},size;
	size= sizeof(arr)/sizeof(arr[0]);
	printf("The unique number is : ");
	unique(arr,size);
	return 0 ;
}

