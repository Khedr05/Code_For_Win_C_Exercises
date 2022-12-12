/* 
 
Author : "Sherif_Ashraf".

Version : "v-1.0".

Program : "Write a C program to input number from user and find sum of all even numbers between 1 to n. 
How to find sum of even numbers in a given range using loop in C programming. 
Logic to find sum of even numbers in a given range in C program".

*/

#include<stdio.h>

void main(void)
{
	int n,sum=0;
	printf("Enter last number \n");
	scanf("%d",&n);
	for(int i=0;i<=n;i+=2)
	{
		sum+=i;
	}
	printf("sum of all even numbers between 1 & %d = %d",n,sum);
}