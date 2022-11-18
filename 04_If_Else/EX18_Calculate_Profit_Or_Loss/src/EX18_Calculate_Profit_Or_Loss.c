/*
 ============================================================================
 Name        : EX18_Calculate_Profit_Or_Loss.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float c_p,s_p,res;
	printf("Enter Cost Price \n");
	fflush(stdout);
	scanf("%f",&c_p);
	printf("Enter Selling Price \n");
	fflush(stdout);
	scanf("%f",&s_p);
	if(s_p>c_p)
	{
		res = s_p - c_p;
		printf("Profit = %0.2f",res);
	}
	else if(c_p>s_p)
	{
		res = c_p - s_p;
		printf("Loss = %0.2f",res);
	}
	else
	{
		printf("No Loss No Profit");
	}
}
