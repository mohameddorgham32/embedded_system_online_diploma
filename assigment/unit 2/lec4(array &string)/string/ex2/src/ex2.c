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
	char a[20000] , b ;
	int i=0 ;
	printf("enter a string");
	fflush(stdin);fflush(stdout);
	gets(a);
	for(b=0 ; a[b]!='\0' ; b++)
	{
		++i;
	}
	printf("length of string = %d ",i);


}

