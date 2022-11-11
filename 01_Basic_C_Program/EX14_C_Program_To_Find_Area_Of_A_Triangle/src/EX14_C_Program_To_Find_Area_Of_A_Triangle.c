/*
 ============================================================================
 Name        : EX14_C_Program_To_Find_Area_Of_A_Triangle.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float height,base,area;
	printf("Enter Height Of Triangle Then Base Of Triangle\n");
	fflush(stdout);
	scanf("%f %f",&height,&base);
	area = (height * base)/2;
	printf("Area Of Triangle = %0.2f sq.units",area);
}
