/*
#####################################################
 *      Project:reverse a sentence using recursion.
 *      Created on: Dec 19, 2023
 *      Author:Slim benhammouda
 *###################################################
 */
#include<stdio.h>
void reverse()
{
	char c;
	scanf("%c",&c);
	if(c!='\n')
		reverse();
	printf("%c",c);
}
int main()
{
	printf("Enter a sentence: ");
	fflush(stdout);fflush(stdin);
	reverse();
	return 0;
}

