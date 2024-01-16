/*######################################################
 *  Project:o print a string in reverse using a pointer.
 *  Created on: Jan 16, 2024
 *  Author:Slim benhammouda
 *######################################################
 */
#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char str[50];
	char* p;
	printf("Input a string : ");
	fflush(stdout);fflush(stdin);
	scanf("%s",str);
	p=&str[strlen(str)-1];
	printf("Reverse of the string is : ");
	for(i=0;i<strlen(str);i++)
	{
		printf("%c",*p);
		fflush(stdout);
		p--;
	}

	return 0;
}


