/*#########################################################
 *  Project:store information of students using structure
 *  Created on: Jan 7, 2024
 *  Author:Slim benhammouda
 *#########################################################
 */
#include<stdio.h>
struct student
{
	char name[50];
	float marks;
};
int main()
{
	struct student arr[10];
	int i;
	printf("Enter information of students:\n\n");
	for(i=0;i<=9;i++)
	{
		printf("For roll number %d\n",i+1);
		printf("Enter name: ");
		fflush(stdout);
		scanf("%s",arr[i].name);
		printf("Enter marks: ");
		fflush(stdout);
		scanf("%f",&arr[i].marks);
	}
	printf("Desplaying information of students:\n\n");
	for(i=0;i<=9;i++)
	{
		printf("Informaion for roll number %d:\n",i+1);
		printf("Name: %s\nMarks: %.2f\n\n",arr[i].name,arr[i].marks);
	}
	return 0;
}

