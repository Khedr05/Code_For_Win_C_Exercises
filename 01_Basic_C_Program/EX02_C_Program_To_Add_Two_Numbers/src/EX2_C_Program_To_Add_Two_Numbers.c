/*
 ============================================================================
 Name        : EX2_C_Program_To_Add_Two_Numbers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1,num2,sum=0;
	printf("Enter First Number\n");
	fflush(stdout);
	scanf("%d",&num1);
	printf("Enter Second Number\n");
	fflush(stdout);
	scanf("%d",&num2);
	sum = num1 + num2;
	printf("Sum Of Two Number = %d",sum);


}
