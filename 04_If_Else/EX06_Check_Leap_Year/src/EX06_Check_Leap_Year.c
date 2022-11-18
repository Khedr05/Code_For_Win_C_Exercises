/*
 ============================================================================
 Name        : EX06_Check_Leap_Year.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	  int year;
	  printf("Enter The Year \n");
	  fflush(stdout);
	  scanf("%d",&year);
	   if(((year % 4 == 0) && (year % 100 !=0)) || (year % 400==0))
	        printf("Leap Year");
	    else
	        printf("Common Year");
}
