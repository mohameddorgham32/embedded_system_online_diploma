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

void main()
{
	int  k , i, factorial=1  ;
	printf("Enter an intger :");
	fflush(stdout);
	scanf("%d",&k);
	if(k>0)
	{
		for(i=1 ; i<=k ; ++i)
		{
			factorial*=i;
		}
		printf("factorial=%d",factorial);

	}
	else if(k==0)
	{
		printf("factorial=1");
	}
	else
		printf("Error!!! factorial of negative number does not exist");


}s
