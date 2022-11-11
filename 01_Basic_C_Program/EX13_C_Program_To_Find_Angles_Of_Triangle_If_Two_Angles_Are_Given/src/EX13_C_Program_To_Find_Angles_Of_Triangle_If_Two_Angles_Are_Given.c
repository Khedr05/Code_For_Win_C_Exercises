/*
 ============================================================================
 Name        : EX13_C_Program_To_Find_Angles_Of_Triangle_If_Two_Angles_Are_Given.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float fangle,sangle,tangle;
	printf("Enter The First Angle Then The Second Angle \n");
	fflush(stdout);
	scanf("%f %f",&fangle,&sangle);
	tangle = 180 - (fangle + sangle);
	printf("Third Angle = %0.2f",tangle);
}
