/*
 ============================================================================
 Name        : EX08_Check_Vowel_Or_Consonant.c
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
	if((ch == 'a') || (ch == 'A') || (ch == 'e') || (ch == 'E')
	|| (ch == 'i') || (ch == 'I') || (ch == 'o') || (ch == 'O')
	|| (ch == 'u') || (ch == 'U'))
		printf("Character Is Vowel");
	else
		printf("Character Is Consonant");

}
