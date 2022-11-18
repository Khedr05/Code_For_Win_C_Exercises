/*
 ============================================================================
 Name        : EX10_Character_Is_Uppercase_Or_Lowercase.c
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
		if(ch >='a' && ch<='z')
			printf("Character Is Lowercase");
		else if(ch >='A' && ch<='Z')
			printf("Character Is Uppercase");
		else
			printf("Invalid Character");
}
