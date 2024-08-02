/*
 ============================================================================
 Name        : ex2.c
 Author      : Mohamed Dorgham
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float b[600];
	int i ;
	float sum;
	int x ;
	printf("Enter the number of data :\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&i);
	for(x=0 ; x<i ; x++)
	{
		printf("Enter number %d :\n",x+1);
		fflush(stdin);fflush(stdout);
		scanf("%f",&b[i]);
		sum+=b[i];
	}
	printf("average is :%f ",sum/i);
}

