/*
 ============================================================================
 Name        : ex7.c
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
	float a , b  ;
	printf("enter the value of a :");
	fflush(stdout);
	scanf("%f",&a);
	printf("enter the value of b :");
	fflush(stdout);
	scanf("%f",&b);
	printf("After swapping, value of a = %f\r\n",b);
	b=a;
	printf("After swapping, value of b = %f",b);


}
