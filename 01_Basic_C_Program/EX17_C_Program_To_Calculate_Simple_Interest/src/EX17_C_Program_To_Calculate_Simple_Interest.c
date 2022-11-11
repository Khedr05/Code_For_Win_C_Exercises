/*
 ============================================================================
 Name        : EX17_C_Program_To_Calculate_Simple_Interest.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float p,t,r,si;
	printf("Enter Principle,Time,Rate In Order\n");
	fflush(stdout);
	scanf("%f %f %f",&p,&t,&r);
	si = (p*t*r)/100;
	printf("Simple Interest = %.2f",si);

}
