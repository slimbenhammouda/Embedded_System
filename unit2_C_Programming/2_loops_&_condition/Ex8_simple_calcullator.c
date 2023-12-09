/*
 * ################################
 * Ex8_simple_calcullator.c
 *      Project:simple calculator.
 *      Created on: Nov 28, 2023 
 *      Author:Slim benhammouda.
 * ################################
 */
#include<stdio.h>
int main()
{
	float num1,num2;
	char opr;
	printf("Enter operator either - ,+ ,* or / :");
	fflush(stdin); fflush(stdout);
	scanf("%c",&opr);
	printf("Enter two operands:");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&num1,&num2);
	switch(opr)
	{
	case'-':
		printf("%f %c %f=%f",num1,opr,num2,num1-num2);
	break;
	case'+':
		printf("%f %c %f=%f",num1,opr,num2,num1+num2);
	break;
	case'*':
		printf("%f %c %f=%f",num1,opr,num2,num1*num2);
	break;
	case'/':
	{
		if(num2==0)
			printf("Error!!! please enter a devidor !=0");
		else
		    printf("%f %c %f=%f",num1,opr,num2,num1/num2);
	}
	break;
	default:
		printf("wrong choice!!!");
	break;
	}
	return 0 ;
}




