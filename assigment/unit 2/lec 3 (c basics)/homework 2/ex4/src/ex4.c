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

int main()
{
	float i ;
	printf("Enter a number :");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&i);
	if(i>0)
	{
		printf("%f is positive ",i);
	}

	else if (i<0)
	{
		printf("%f is negative ",i);

	}
	else
		printf("you entered zero");

}
