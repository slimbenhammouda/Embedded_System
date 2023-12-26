/*###########################################
 *  Project:Reverse words in a string.
 *  Created on: Dec 26, 2023
 *  Author: Slim benhammouda
 *###########################################
 */
#include<stdio.h>
#include<string.h>
void rev_word(char arr[],int size)
{
	char str1[50],str2[50];
	int i,j,cont1=0,cont2=0;
	for(i=0;i<size;i++)
	{
		if(arr[i]==' ')
			break;
		else
		{
			str1[i]=arr[i];
			cont1++;
		}
	}
	for(i=cont1+1,j=0;i<size;i++,j++)
	{
		str2[j]=arr[i];
		cont2++;
	}
	printf("After revercing the string is:  ");
	for(i=0;i<cont2;i++)
		printf("%c",str2[i]);
	printf(" ");
	for(j=0;j<cont1;j++)
		printf("%c",str1[j]);
}
int main()
{
	char arr[100];
	int size;
	printf("Enter a string: ");
	fflush(stdout);fflush(stdin);
	gets(arr);
	size=strlen(arr);
	rev_word(arr,size);
	return 0;

}







