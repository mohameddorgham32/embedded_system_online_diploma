/*
 ============================================================================
 Name        : ex4.c
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
	int array[100];
	int no , k , location , e;
	printf("enter no of element :");
	fflush(stdin);fflush(stdout);
	scanf("%d", &no);
	for(k=0 ; k<no ; k++)
	{
		printf("%d",k+1);
		scanf("%d",&array[k]);
	}
	printf("\n enter the element to be inserted:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&e);
	printf("\n enter the location : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&location);
	for(k=no ; k>=location ; k--)
	{
		array[k]=array[k-1];
	}
	no++;
	array[location-1]=e;
	for(k=0 ; k<no ; k++)
	{
		printf(" %d ",array[k]);
	}



}
