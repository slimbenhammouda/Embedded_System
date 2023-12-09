/*
 * #####################################################
 * Ex5_check_character_is_alphabet_or_not.c
 *      Project:check character is an alphabet or not.
 *      Created on: Nov 28, 2023 
 *      Author:Slim benhammouda.
 * #####################################################
 */
#include<stdio.h>
int main()
{
	char ch;
	printf("enter a character :");
	fflush(stdin); fflush(stdout);
	scanf("%c",&ch);
	if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='z'))
		printf("%c is an alphabet",ch);
	else printf("%c is not an alphabet",ch);
	return 0 ;
}




