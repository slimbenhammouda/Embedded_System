/*#############################################
 *      Project:Reverse string.
 *      Created on: Dec 10, 2023
 *      Author: Slim benhammouda.
 *#############################################
 */
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[100],ox;
	int i;
	printf("Enter a string : ");
	fflush(stdin); fflush(stdout);
	scanf("%s",arr);
	for(i=0;i<strlen(arr)/2;i++)
	{
		ox=arr[i];
		arr[i]=arr[(strlen(arr)-1)-i];
		arr[(strlen(arr)-1)-i]=ox;
	}
	printf("Reverse string is : %s",arr);
	return 0 ;
}
