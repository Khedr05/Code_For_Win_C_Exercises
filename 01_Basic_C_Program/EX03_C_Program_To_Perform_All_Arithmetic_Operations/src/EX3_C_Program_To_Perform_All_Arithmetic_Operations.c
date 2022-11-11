/*
 ============================================================================
 Name        : EX3_C_Program_To_Perform_All_Arithmetic_Operations.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1,num2,sum=0,sub=0,mul=0,mod=0;
	float div=0;
	printf("Enter First Number\n");
	fflush(stdout);
	scanf("%d",&num1);
	printf("Enter Second Number\n");
	fflush(stdout);
	scanf("%d",&num2);
	sum = num1 + num2;
	sub = num1 - num2;
	mul = num1 * num2;
	div = (float)num1 / num2;
	mod = num1 % num2;
	printf("Sum Of Two Number = %d \n",sum);
	printf("Subtract Of Two Number = %d \n",sub);
	printf("Multiply Of Two Number = %d \n",mul);
	printf("Division Of Two Number = %f \n",div);
	printf("Modules Of Two Number = %d \n",mod);
}
