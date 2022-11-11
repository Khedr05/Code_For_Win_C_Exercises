/*
 ============================================================================
 Name        : EX12_C_Program_To_Find_Square_Root_Of_A_Number.c
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
	float num,root;
	printf("Enter The Number \n");
	fflush(stdout);
	scanf("%f",&num);
	root = sqrt(num);
	printf("Square Root Of %0.2f = %0.2f",num,root);

}
