/*
 ============================================================================
 Name        : EX03_Number_Is_Positive_Negative_Or_Zero.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x;
	printf("Enter The Number \n");
	fflush(stdout);
	scanf("%d",&x);
	if(x>0)
		printf("%d Is Positive",x);
	else if(x<0)
		printf("%d Is Negative",x);
	else
		printf("%d Is Zero",x);
	return 0;
}
