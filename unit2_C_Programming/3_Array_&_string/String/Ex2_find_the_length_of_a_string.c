/*#############################################
 *      Project:Find the length of a string.
 *      Created on: Dec 10, 2023
 *      Author: Slim benhammouda.
 *#############################################
 */
#include<stdio.h>
int main()
{
	int i,length=0;
	char string[100];
	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	gets(string);
	for(i=0;i<=sizeof(string);i++)
	{
		if(string[i]!='\0')
			length+=1;
		else
			break;

	}
	printf("\nLength of string: %d",length);
	return 0 ;

}


