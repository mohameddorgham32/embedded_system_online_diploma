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
	int i , f=0 ;
	char a[1000] , c;
	printf("enter a string :");
	fflush(stdin);fflush(stdout);
	gets(a);
	printf("enter a character to find frequency : ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&c);
	for(i=0 ; a[i]!='\0' ; i++)
	{
		if(c==a[i])
			++f;
	}
	printf("frequency of %c = %d", c , f);
}
