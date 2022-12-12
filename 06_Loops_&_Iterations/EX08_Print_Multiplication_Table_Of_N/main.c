/* 
 
Author : "Sherif_Ashraf".

Version : "v-1.0".

Program : "Write a C program to input a number from user and print multiplication table
of the given number using for loop. How to print multiplication table of a given number
in C programming. Logic to print multiplication table of any given number in C program".

*/

#include<stdio.h>

void main(void)
{
	int n,res=0;
	printf("Enter number to print its multiplication number\n");
	scanf("%d",&n);
	for(int i=1;i<=10;i++)
	{
		res = n*i;
		printf("%d * %d = %d \n",n,i,res);	
	}
	
}