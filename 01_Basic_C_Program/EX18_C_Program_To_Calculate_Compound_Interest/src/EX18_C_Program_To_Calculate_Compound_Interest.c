/*
 ============================================================================
 Name        : EX18_C_Program_To_Calculate_Compound_Interest.c
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
	float p,t,r,ci;
	printf("Enter Principle(Amount),Time,Rate In Order\n");
	fflush(stdout);
	scanf("%f %f %f",&p,&t,&r);
	ci = p*pow((1+r/100),t);
	printf("Compound Interest = %.2f",ci);
}
