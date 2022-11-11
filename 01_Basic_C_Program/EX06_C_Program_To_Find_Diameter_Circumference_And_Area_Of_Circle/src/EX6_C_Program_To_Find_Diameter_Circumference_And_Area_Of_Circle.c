/*
 ============================================================================
 Name        : EX6_C_Program_To_Find_Diameter_Circumference_And_Area_Of_Circle.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float rad,diameter=0,area=0,circumference=0,pi=3.14;
	printf("Enter Radius Of Circle\n");
	fflush(stdout);
	scanf("%f",&rad);
	area = pi*(rad*rad);
	diameter = 2*rad;
	circumference = 2*pi*rad;
	printf("Diameter Of Circle = %0.2f Units \n",diameter);
	printf("Circumference Of Circle = %0.2f Units \n",circumference);
	printf("Area Of Circle = %0.2f Sq. Units \n",area);
	fflush(stdout);
}
