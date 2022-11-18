/*
 ============================================================================
 Name        : EX09_Character_Is_Alphabet_Digit_Or_Special_Character.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char ch;
	printf("Enter The Character \n");
	fflush(stdout);
	scanf("%c",&ch);
	if((ch >='a' && ch<='z') || (ch >='A' && ch<='Z'))
		printf("Character Is Alphabet");
	else if(ch>='0' && ch<='9')
		printf("Character Is Digit");
	else
		printf("Character Is Special Character");
}
