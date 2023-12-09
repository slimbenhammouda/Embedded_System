/*
 * ##############################################
 * Ex5_Find_ASCII_Value_of_a_Character.c
 *      project:Find ASCII Value of a Character.
 *      Created on: Nov 27, 2023 
 *      Author:Slim benhammouda.
 * ##############################################
 */
#include<stdio.h>
int main()
{
	char ch ;
	printf("Enter a character:");
	fflush(stdin); fflush(stdout);
	scanf("%c",&ch);
	printf("ASCII value of %c = %d",ch,ch);
	return 0 ;
}




