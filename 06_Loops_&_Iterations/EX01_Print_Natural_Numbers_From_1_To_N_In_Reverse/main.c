/* 
 
Author : "Sherif_Ashraf".

Version : "v-1.0".

Program : "Write a C program to print all natural numbers in reverse from n to 1 using for loop. 
How to print natural numbers in reverse order in C programming. 
Logic to print natural numbers in reverse for a given range in C program".

*/

#include<stdio.h>

void main(void)
{
	int n=0;
	printf("Enter The Last Number \n");
	scanf("%d",&n);
	for(int i=n;i>=0;i--)
	{
		printf("%d \t",i);
	}
}