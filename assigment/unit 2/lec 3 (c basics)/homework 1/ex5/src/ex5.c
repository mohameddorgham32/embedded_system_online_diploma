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

int main()
{
	char c ;
	printf("Enter a character:");
	fflush(stdout);
	scanf("%c", &c);
	printf("ASCII value of %c=%d" ,c, c);
	return 0 ;

}
