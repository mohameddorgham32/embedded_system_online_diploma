/*
 ============================================================================
 Name        : ex6.c
 Author      : mohamed dorgham
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a , b , c ;
	printf("enter the value of a :");
	fflush(stdout);
	scanf("%f",&a);
	printf("enter the value of b :");
	fflush(stdout);
	scanf("%f",&b);
	c=a;
	a=b;
	b=c;
	printf("After swapping, value of a = %f\r\nAfter swapping, value of b =%f",a,b);

}
