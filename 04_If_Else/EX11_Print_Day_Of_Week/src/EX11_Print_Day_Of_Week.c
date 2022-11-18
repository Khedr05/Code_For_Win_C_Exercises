/*
 ============================================================================
 Name        : EX11_Print_Day_Of_Week.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num_of_day;
	printf("Enter Number Of Day In Range Of [1 - 7] \n");
	fflush(stdout);
	scanf("%d",&num_of_day);
	if(num_of_day == 1)
		printf("Friday");
	else if(num_of_day == 2)
		printf("Saturday");
	else if(num_of_day == 3)
		printf("Sunday");
	else if(num_of_day == 4)
		printf("Monday");
	else if(num_of_day == 5)
		printf("Tuesday");
	else if(num_of_day == 6)
		printf("Wednesday");
	else if(num_of_day == 7)
		printf("Thursday");
	else
		printf("Invalid Number");
}
