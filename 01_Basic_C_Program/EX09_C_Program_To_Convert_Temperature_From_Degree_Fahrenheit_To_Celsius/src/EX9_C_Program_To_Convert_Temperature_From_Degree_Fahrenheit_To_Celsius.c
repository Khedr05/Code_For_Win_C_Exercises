/*
 ============================================================================
 Name        : EX8_C_Program_To_Convert_Temperature_From_Degree_Celsius_To_Fahrenheit.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float c=0.0,f=0.0;
	printf("Enter Temperature In Fahrenheit = \n");
	fflush(stdout);
	scanf("%f",&f);
	c = (f-32)*5/9;
	printf("Enter Temperature In Celsius = %0.2f C \n",c);
}
