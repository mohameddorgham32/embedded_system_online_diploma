/*
 ============================================================================
 Name        : ex5.c
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
	int no , i , e , array[100];
	printf(" enter number of element:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&no);
	for(i=0 ; i<no ; i++)
	{
		scanf("%d",&array[i]);
	}
	printf("\n enter the element to be searched :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&e);
	i=0;
	while(i<no && e!=array[i])
	{
		i++;
	}
	if(i<no)
	{
		printf("number found at location %d",i+1);
	}
	else
		printf("number not found");
}
