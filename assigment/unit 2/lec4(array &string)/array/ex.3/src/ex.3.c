/*
 ============================================================================
 Name        : 3.c
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
	int x[10][10];
	int t[10][10];
	int r , c , a , b;
	printf("Enter rows and column of matrix : ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&r, &c);
	printf("\nEnter the element of matrix :\n");
	for(a=0 ; a<r ; a++)
	{
		for(b=0 ; b<c ; b++)
		{
			printf("Enter a%d%d : \n",a+1,b+1);
			fflush(stdin);fflush(stdout);
			scanf("%d",&x[a][b]);
		}
	}
	printf("Entered matrix :\n");
	for(a=0 ; a<r ; a++)
	{
		for(b=0 ; b<c ; b++)
		{
			printf("%d  ",x[a][b]);
		}
		printf("\n");
	}
	for(a=0 ; a<r ; a++)
	{
		for(b=0 ; b<c ; b++)
		{
			t[a][b]=x[b][a];
		}
	}
	for(a=0 ; a<2 ; b++)
	{
		for	(b=0 ; b<2 ; b++)
		{
			printf("%d   ",t[a][b]);
		}
		printf("\n");
	}
}

