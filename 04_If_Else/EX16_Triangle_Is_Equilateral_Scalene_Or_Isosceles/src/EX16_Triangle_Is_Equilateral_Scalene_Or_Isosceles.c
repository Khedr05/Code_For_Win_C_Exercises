/*
 ============================================================================
 Name        : EX16_Triangle_Is_Equilateral_Scalene_Or_Isosceles.c
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
	if((fside == sside) && (fside == tside))
		printf("Triangle Is Equilateral Triangle \n");
	else if((fside == sside) || (fside==tside) || (sside==tside))
		printf("Triangle Is Isosceles Triangle \n");
	else
		printf("Triangle Is  Scalene Triangle \n");
}
