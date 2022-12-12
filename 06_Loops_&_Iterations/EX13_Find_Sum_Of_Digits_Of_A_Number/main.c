/* 
 
Author : "Sherif_Ashraf".

Version : "v-1.0".

Program : "Write a C program to input a number and calculate sum of digits
using for loop. How to find sum of digits of a number in C program. 
Logic to find sum of digits of a given number in C programming".
*/

#include<stdio.h>
void main(void)
{
	int n,i,last,sum=0;
	printf("Enter number \n");
	scanf("%d",&n);
	i=n;
	while(i!=0)
	{	last=i%10;
		i=i/10;
		sum+=last;
	}
	printf("sum of digit of number %d = %d",n,sum);
}