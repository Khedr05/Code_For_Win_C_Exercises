/*
 ============================================================================
 Name        : EX10_C_Program_To_Convert_Days_To_Years_Weeks_And_Days.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int days,weeks,years,day;
	printf("Enter Number Of Days \n");
	fflush(stdout);
	scanf("%d",&days);
	years = days/365;
	weeks = (days - (years * 365))/7;
	day  = days - ((years * 365) + (weeks * 7));
	printf("%d Days = %d Year/s %d Week/s %d Day/s \n",days,years,weeks,day);
}
