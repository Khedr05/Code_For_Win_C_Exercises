/*
 ============================================================================
 Name        : EX07_Character_Is_Alphabet_Or_Not.c
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
	printf("Enter Character \n");
	fflush(stdout);
	scanf("%c",&ch);
	if((ch >='a' && ch<='z') || (ch >='A' && ch<='Z'))
		printf("Character Is Alphabet");
	else
		printf("Character Is Not Alphabet");
}
