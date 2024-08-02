/*
 ============================================================================
 Name        : ex3.c
 Author      : Mohamed Dorgham
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	char a[1000] , b  ;
	int x , y ;
	printf("enter a string");
	fflush(stdin);fflush(stdout);
	gets(a);
	x=0 ;
	y=strlen(a) - 1;
	while(x<y)
	{
		b=a[x];
		a[x]=a[y];
		a[y]=b;
		x++;
		y-- ;
	}
	printf("reverse string :%s",a);

}

