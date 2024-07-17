/*
 ============================================================================
 Name        : ex2.c
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
	printf("Enter an alphabet :");
	fflush(stdout);
	scanf("%c",&c);
	if (c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U' )
	{
		printf("%c is vowel",c);

	}
	else
	{
		printf("%c is consonant",c);
	}
return 0 ;

}
