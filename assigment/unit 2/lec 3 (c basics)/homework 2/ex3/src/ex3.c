/*
 ============================================================================
 Name        : ex3.c
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
	float a,b,c;
	printf("Enter three numbers :");
	fflush(stdout);
	scanf("%f %f %f",&a,&b,&c);
	if(a>=b)
	{
		if(a>=c)
			printf("largest number is %f",a);
		else
			printf("largest number is %f",c);

	}
	else
	{
		if(b>=c)
			printf("largest number is %f",b);
		else
			printf("largest number is %f",c);

	}


}
