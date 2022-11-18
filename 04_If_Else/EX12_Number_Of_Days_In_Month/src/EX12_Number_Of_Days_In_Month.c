/*
 ============================================================================
 Name        : EX12_Number_Of_Days_In_Month.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int month;
	printf("Enter Month Number In This Range [1-12]: ");
	fflush(stdout);
	scanf("%d",&month);
	if(month == 1)
		printf("It Contains 31 Days");
	else if(month == 2)
		printf("It Contains 28 Or 29 Days");
	else if(month == 3)
		printf("It Contains 31 Days");
	else if(month == 4)
		printf("It Contains 30 Days");
	else if(month == 5)
		printf("It Contains 31 Days");
	else if(month == 6)
		printf("It Contains 30 Days");
	else if(month == 7)
		printf("It Contains 31 Days");
	else if(month == 8)
		printf("It Contains 31 Days");
	else if(month == 9)
		printf("It Contains 30 Days");
	else if(month == 10)
		printf("It Contains 31 Days");
	else if(month == 11)
		printf("It Contains 30 Days");
	else if(month == 12)
		printf("It Contains 31 Days");
	else
		printf("Invalid Month");
}
