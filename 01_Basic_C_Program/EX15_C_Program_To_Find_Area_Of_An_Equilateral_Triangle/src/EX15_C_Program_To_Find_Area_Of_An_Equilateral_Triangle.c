/*
 ============================================================================
 Name        : EX15_C_Program_To_Find_Area_Of_An_Equilateral_Triangle.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void) {
	float side,area;
	printf("Enter Side Of Equilateral Triangle \n");
	fflush(stdout);
	scanf("%f",&side);
	area = (sqrt(3)/4)*(side*side);
	printf("Area Of Equilateral Triangle = %0.2f sq.units",area);
}
