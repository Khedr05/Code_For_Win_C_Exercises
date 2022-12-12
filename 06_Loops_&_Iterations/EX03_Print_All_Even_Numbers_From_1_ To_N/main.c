/* 
 
Author : "Sherif_Ashraf".

Version : "v-1.0".

Program : "Write a C program to print all even numbers from 1 to n using for loop. 
C program to generate all even numbers between given range. 
Logic to print even numbers using if else and for loop in given range in C programming".

*/

#include<stdio.h>

void main(void)
{
	int n;
	printf("Enter last number \n");
	scanf("%d",&n);
	for(int i=0;i<=n;i+=2)
	{
		printf("%d \t",i);
	}
}