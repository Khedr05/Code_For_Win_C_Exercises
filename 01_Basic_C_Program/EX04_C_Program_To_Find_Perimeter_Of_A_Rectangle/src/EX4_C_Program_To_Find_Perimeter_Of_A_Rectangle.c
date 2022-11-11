/*
 ============================================================================
 Name        : EX4_C_Program_To_Find_Perimeter_Of_A_Rectangle.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float len,wid,p=0;
	printf("Enter Length Of Rectangle\n");
	fflush(stdout);
	scanf("%f",&len);
	printf("Enter Width Of Rectangle\n");
	fflush(stdout);
	scanf("%f",&wid);
	p = 2*(len + wid);
	printf("Perimeter Of Rectangle = %f Units",p);
}
