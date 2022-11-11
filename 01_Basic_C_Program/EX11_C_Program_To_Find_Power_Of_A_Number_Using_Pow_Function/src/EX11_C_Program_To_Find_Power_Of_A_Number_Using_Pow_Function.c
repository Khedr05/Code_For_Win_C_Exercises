/*
 ============================================================================
 Name        : EX11_C_Program_To_Find_Power_Of_A_Number_Using_Pow_Function.c
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
	float expo,base,power;
	printf("Enter Base Number \n");
	fflush(stdout);
	scanf("%f",&base);
	printf("Enter Exponent Number \n");
	fflush(stdout);
	scanf("%f",&expo);
	power = pow(base,expo);
	printf("%0.2f ^ %0.2f = %0.2f",base,expo,power);

}
