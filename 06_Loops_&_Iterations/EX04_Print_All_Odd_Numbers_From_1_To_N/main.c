/* 
 
Author : "Sherif_Ashraf".

Version : "v-1.0".

Program : "Write a C program to print all odd numbers from 1 to n using for loop. 
How to print odd numbers from 1 to n using loop in C programming. 
Logic to print odd numbers in a given range in C programming".

*/

#include<stdio.h>

void main(void)
{
	int n;
	printf("Enter last number \n");
	scanf("%d",&n);
	for(int i=1;i<=n;i+=2)
	{
		printf("%d \t",i);
	}
}