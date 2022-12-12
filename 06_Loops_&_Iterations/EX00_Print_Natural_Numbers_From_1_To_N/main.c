/* 
 
Author : "Sherif_Ashraf".

Version : "v-1.0".

Program : "Write a C program to print all natural numbers from 1 to n using loop. 
C program to print first n natural numbers using loop. How to print natural numbers 
in a given range using loop. Logic to print natural numbers using for loop in C program".

*/

#include<stdio.h>

void main(void)
{
	int n=0;
	printf("Enter The Last Number \n");
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
	{
		printf("%d \t",i);
	}
}