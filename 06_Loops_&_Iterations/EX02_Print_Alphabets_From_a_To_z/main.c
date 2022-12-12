/* 
 
Author : "Sherif_Ashraf".

Version : "v-1.0".

Program : "Write a C program to print alphabets from a to z using for loop.
How to print alphabets using loop in C programming. 
Logic to print alphabets from a to z using for loop in C programming.".

*/

#include<stdio.h>

void main(void)
{
	for(char start='a';start<='z';start++)
	{
		printf("%c \t",start);
	}
}