/*
 ============================================================================
 Name        : ex4.c
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
	float i , k ,product ;
	printf("Enter two integers:");
	fflush(stdout);
	scanf("%f  %f", &i , &k);
	product=i*k ;
	printf("product :%f",product);
}

