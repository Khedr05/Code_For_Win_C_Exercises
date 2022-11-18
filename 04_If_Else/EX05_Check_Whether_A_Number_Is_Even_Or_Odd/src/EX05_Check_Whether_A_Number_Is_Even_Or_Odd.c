/*
 ============================================================================
 Name        : EX05_Check_Whether_A_Number_Is_Even_Or_Odd.c
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
  if(num % 2 == 0)
	 printf("Number Is Even \n");
  else
	  printf("Number Is Odd \n");
}
