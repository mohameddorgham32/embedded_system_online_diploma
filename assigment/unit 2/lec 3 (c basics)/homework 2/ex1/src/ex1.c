/*
 ============================================================================
 Name        : ex1.c
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
	int i  ;
	printf("Enter an integer you want to check :");
	fflush(stdout);
	scanf("%d",&i);
	if((i%2)==0)
	{
		printf("%d is even ", i);

	}
	else
	{
		printf("%d is odd ",i);
	}
	return 0 ;
}
