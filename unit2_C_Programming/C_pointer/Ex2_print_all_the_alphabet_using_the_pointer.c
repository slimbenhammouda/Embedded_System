/*#######################################################
 *    Project:print all the alphabet using the pointer.
 *    Created on: Jan 15, 2024
 *    Author:Slim benhammouda
 *#######################################################
 */
#include<stdio.h>
int main()
{
	int i;
	char alphabet[26];
	char* p;
	p=alphabet;
    for(i=0;i<26;i++)
    {
    	*p=i+'A';
    	p++;
    }
    p=alphabet;
    printf("The alphabets are :\n");
    for(i=0;i<26;i++)
    {
    	printf("%c  ",*p);
    	p++;
    }
    return 0;
}

