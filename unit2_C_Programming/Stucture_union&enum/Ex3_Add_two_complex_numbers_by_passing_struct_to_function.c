/*###################################################################
 *  Project:Add two complex numbers by passing struct to function.
 *  Created on: Jan 7, 2024
 *  Author:Slim benhammouda
 *###################################################################
 */
#include<stdio.h>
struct complex
{
	float R;
	float I;
};
struct complex add(struct complex x,struct complex y)
{
	struct complex temp;
	temp.R=x.R+y.R;
	temp.I=x.I+y.I;
	return temp;
}
int main()
{
	struct complex sum,n1,n2;
	printf("For 1st complex number\n");
	fflush(stdout);
	printf("Enter real and imagenary respectively: ");
	fflush(stdout);
	scanf("%f %f",&n1.R,&n1.I);
	printf("For 2st complex number\n");
	fflush(stdout);
	printf("Enter real and imagenary respectively: ");
	fflush(stdout);
	scanf("%f %f",&n2.R,&n2.I);
	sum=add(n1,n2);
	printf("Sum=%.1f+%.1fi",sum.R,sum.I);
	return 0;
}

