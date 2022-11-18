/*
 ============================================================================
 Name        : EX15_Triangle_Is_Valid_Or_Not_If_Sides.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int fside,sside,tside;
	printf("Enter First Side :");
	fflush(stdout);
	scanf("%d",&fside);
	printf("Enter Second Side :");
	fflush(stdout);
	scanf("%d",&sside);
	printf("Enter Third Side :");
	fflush(stdout);
	scanf("%d",&tside);
	if((fside>0 && sside >0 && tside>0) && (fside+sside>tside && fside+tside>sside && sside+tside>fside))
		printf("Valid Triangle");
	else
		printf("Invalid Triangle");
}
