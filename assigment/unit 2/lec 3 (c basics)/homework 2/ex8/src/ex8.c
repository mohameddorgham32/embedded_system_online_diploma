/*
 ============================================================================
 Name        : ex8.c
 Author      : mohamed dorgham
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void main()
{
	char choice ;
	float a,b;
	printf("Enter an operation +  or  -  or  *  or  divide :");
	fflush(stdout);
	scanf("%c", &choice);
	printf("Enter two number :");
	fflush(stdout);
	scanf("%f %f",&a,&b);

	switch(choice)
	{
	case '+':
		printf("%f + %f= %f ",a,b,a+b);
		break;
	case '-':
		printf("%f - %f = %f ",a,b,a-b);
		break;
	case '*':
		printf("%f * %f = %f ",a,b,a*b);
		break;
	case 'divide':
		printf("%f / %f = %f ",a,b,a/b);
		break;
	}
}
