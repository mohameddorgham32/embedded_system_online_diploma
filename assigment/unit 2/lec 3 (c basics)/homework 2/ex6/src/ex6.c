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

void main()
{
	int  k , i ,sum=0 ;
	printf("Enter an intger :");
	fflush(stdout);
	scanf("%d",&k);
	for(i=1 ; i<=k ; ++i)
	{
		sum +=i;
	}
	printf("sum = %d",sum);
}
