/*
 ============================================================================
 Name        : EX04_Number_Is_Divisible_By_5_And_11_Or_Not.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num;
	printf("Enter The Number \n");
	fflush(stdout);
	scanf("%d",&num);
	if((num%5==0) && (num%11==0))
		printf("%d Is Divisible By 5 And 11",num);
	else
		printf("%d Is Not Divisible By 5 And 11",num);
}
