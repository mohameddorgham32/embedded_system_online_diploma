/*
 ============================================================================
 Name        : ex5.c
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
	char c ;
	printf("Enter a character :");
	fflush(stdout);
	scanf("%c",&c);
	if((c>='a' && c<='z')||(c>='A' && c<='Z'))
				{

		printf("%c is an alphabet",c);
				}
	else
		printf("%c is not an alphabet",c);


}
