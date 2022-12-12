/* 
 
Author : "Sherif_Ashraf".

Version : "v-1.0".

Program : "Write a C program to find the sum of all natural numbers between 1 to n using for loop.
How to find sum of natural numbers in a given range in C programming. 
Logic to find sum of all natural numbers in a given range in C programming".

*/

#include<stdio.h>

void main(void)
{
	int n,sum=0;
	printf("Enter last number \n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		sum+=i;
	}
	printf("Sum of number betwwen 1 & %d = %d",n,sum);
}