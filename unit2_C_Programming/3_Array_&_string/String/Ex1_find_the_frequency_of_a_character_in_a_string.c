/*#############################################################
 *      Project:find the frequency of a character in a string.
 *      Created on: Dec 9, 2023
 *      Author:slim benhammouda
 *#############################################################
 */
#include<stdio.h>
#include<string.h>
int main()
{
	int i,freq=0;
	char searched;
	char string[100];
	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	gets(string);
	printf("\nEnter a character to find frequency: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&searched);
	for(i=0;i<=strlen(string);i++)
	{
		//condition to switch between lower and uppercase letters.
		if(string[i]==searched||string[i]==searched-32||string[i]==searched+32)
			freq+=1;
	}
	printf("\nFrequency of %c = %d",searched,freq);
    return 0 ;
}

