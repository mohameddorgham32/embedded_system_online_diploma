/*
 ============================================================================
 Name        : ex1.c
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
	float a[2][2];
	float b[2][2];
	float s[2][2];
	int r;
	int c;
	printf("enter the element of 1st matrix \n");
	for(r=0 ; r<2 ; r++)
	{
		for	(c=0 ; c<2 ; c++)
		{
			printf("Enter a%d%d: \n",r+1,c+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&a[r][c]);
		}
	}
	printf("enter the element of 2st matrix \n");
	for(r=0 ; r<2 ; r++)
	{
		for	(c=0 ; c<2 ; c++)
		{
			printf("Enter b%d%d: \n",r+1,c+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&b[r][c]);
		}
	}
	for(r=0 ; r<2 ; r++)
	{
		for	(c=0 ; c<2 ; c++)
		{
			s[r][c]=a[r][c] + b[r][c];
		}
	}
	printf("sum of matrix :\n");
	for(r=0 ; r<2 ; r++)
	{
		for	(c=0 ; c<2 ; c++)
		{
			printf("%f\t",s[r][c]);


		}
		printf("\n");
	}

}
