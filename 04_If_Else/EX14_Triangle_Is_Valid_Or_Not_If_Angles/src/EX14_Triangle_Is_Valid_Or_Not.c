/*
 ============================================================================
 Name        : EX14_Triangle_Is_Valid_Or_Not.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int fangle,sangle,tangle;
	printf("Enter First Angle :");
	fflush(stdout);
	scanf("%d",&fangle);
	printf("Enter Second Angle :");
	fflush(stdout);
	scanf("%d",&sangle);
	printf("Enter Third Angle :");
	fflush(stdout);
	scanf("%d",&tangle);
	if(fangle+sangle+tangle == 180 && fangle>0 && sangle >0 && sangle>0)
		printf("Valid Triangle");
	else
		printf("Invalid Triangle");
}
