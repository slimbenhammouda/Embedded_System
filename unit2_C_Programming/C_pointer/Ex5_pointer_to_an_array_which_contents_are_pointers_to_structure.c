/*#############################################################################
 *      Project:Pointer to an array which contents are pointers to structure.
 *      Created on: Jan 16, 2024
 *      Author:Slim ben hammouda
 *#############################################################################
 */
#include<stdio.h>
struct Semp
{
	char name[20];
	int id;
};
int main()
{
	int i,n;
	struct Semp a[50];
	struct Semp *(p[50]);
	for(i=0;i<50;i++)
		p[i]=&a[i];
	struct Semp *((*p1)[50]);
	p1=&p;
	printf("Enter the number of employee :");
	fflush(stdout);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter emoloyee_%d (name):",i+1);
		fflush(stdout);
		scanf("%s",p[i]->name);
		printf("Enter employee_%d (id)",i+1);
		fflush(stdout);
		scanf("%d",&p[i]->id);
	}
	printf("\nEmployee(s) information:\n\n");
	fflush(stdout);
	for(i=0;i<n;i++)
		printf("Employee_%d name: %s\nEmployee id: %d\n",i+1,(*(*p1+i))->name,(*(*p1+i))->id);
	fflush(stdout);
	return 0;
}

