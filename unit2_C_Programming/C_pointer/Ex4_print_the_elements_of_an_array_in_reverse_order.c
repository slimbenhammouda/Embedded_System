/*###########################################################
 *  Project:print the elements of an array in reverse order.
 *  Created on: Jan 16, 2024
 *  Author:Slim ben hammouda
 *###########################################################
 */
#include<stdio.h>
int main()
{
	int n,i;
	int arr[20];
	int* p=arr ;
	printf("Inpute the number of elements to store in the array (max 15):");
	fflush(stdout);fflush(stdin);
	scanf("%d",&n);
	printf("Input %d elements in the array:\n",n);
	fflush(stdout);
	for(i=0;i<n;i++,p++)
	{
		printf("Element-%d : ",i+1);
		fflush(stdout);fflush(stdin);
		scanf("%d",p);
	}
	p=arr+(n-1);
	printf("The elements of array in reverse order are:\n");
	for(i=n;i>0;i--,p--)
		printf("Element-%d : %d\n",i,*p);
	return 0;
}

