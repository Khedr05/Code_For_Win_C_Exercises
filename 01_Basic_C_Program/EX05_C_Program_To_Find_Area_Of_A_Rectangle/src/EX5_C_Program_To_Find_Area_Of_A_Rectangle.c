/*
 ============================================================================
 Name        : EX5_C_Program_To_Find_Area_Of_A_Rectangle.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float len,wid,area=0;
	printf("Enter Length Of Rectangle\n");
	fflush(stdout);
	scanf("%f",&len);
	printf("Enter Width Of Rectangle\n");
	fflush(stdout);
	scanf("%f",&wid);
	area = len*wid;
	printf("Area Of Rectangle = %f Sq. Units",area);
}
