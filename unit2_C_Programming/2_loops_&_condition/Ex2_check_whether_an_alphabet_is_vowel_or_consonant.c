/*
 * ##############################################################
 * Ex2_check_whether_an_alphabet_is_vowel_or_consonant.c
 *      project:check whether an alphabet is vowel or consonant.
 *      Created on: Nov 28, 2023 
 *      Author:Slim benhammouda.
 * ##############################################################
 */
#include<stdio.h>
int main()
{
	char ch;
	int vowel;
	printf("Enter an alphabet:");
	fflush(stdin); fflush(stdout);
	scanf("%c",&ch);
	vowel=(ch=='a'||ch=='e'||ch=='u'||ch=='i'||ch=='o'||ch=='A'||ch=='E'||ch=='U'||ch=='I'||ch=='O');

	if(vowel)
		printf("%c is a vowel",ch);
	else
		printf("%c is a consonant",ch);
	return 0 ;
}




