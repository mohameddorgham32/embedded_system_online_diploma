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
	int i , k , sum ;
	printf("Enter two integers:");
	fflush(stdout);
	scanf("%d  %d", &i , &k);
	sum=i+k ;
	printf("sum :%d",sum);
}
