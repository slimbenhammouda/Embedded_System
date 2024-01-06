/*################################################
 *      Project: store information of a student.
 *      Created on: Jan 6, 2024
 *      Author:Slim benhammouda
 *################################################
 */
#include<stdio.h>
struct Sstudent
{
	char name[50];
	unsigned int roll;
	float marks;
};
int main()
{
	struct Sstudent S;
	printf("Enter information of students:\n\n");
	fflush(stdout);
	printf("Enter name: ");
	fflush(stdout);
	scanf("%s",S.name);
	printf("Enter roll number: ");
	fflush(stdout);
	scanf("%u",&S.roll);
	printf("Enter marks: ");
	fflush(stdout);
	scanf("%f",&S.marks);
	printf("\nDisplaying Information:\n\n");
	printf("Name: %s\nRoll: %u\nMarks: %.2f",S.name,S.roll,S.marks);
	return 0;

}


