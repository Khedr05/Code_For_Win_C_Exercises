/*
 ============================================================================
 Name        : EX7_C_Program_To_Convert_Centimeter_To_Meter_And_Kilometer.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float cm=0,m=100.0,km=10000.0,mRes=0,kmRes=0;
	printf("Enter Length In Centimeter\n");
	fflush(stdout);
	scanf("%f",&cm);
	mRes = cm/m;
	kmRes = cm/km;
	printf("Length In Meter = %0.2f M \n",mRes);
	printf("Length In Kilometer = %0.02f Km \n",kmRes);

}
