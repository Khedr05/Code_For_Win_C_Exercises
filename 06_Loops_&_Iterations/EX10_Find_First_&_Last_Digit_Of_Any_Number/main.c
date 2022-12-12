/* 
 
Author : "Sherif_Ashraf".

Version : "v-1.0".

Program : "Write a C program to input a number from user and find first and
last digit of number using loop. How to find first and last digit of a number 
in C programming. Logic to find first and last digit of a given number without 
using loop in C program".

*/

#include<stdio.h>
void main(void)
{
	int n,first,last;
	printf("Enter number get first & last digits \n");
	scanf("%d",&n);
	first = n;
	while(first>=10)
	{
		first = first/10;
	}
	last = n%10;

	printf("First = %d \nLast = %d",first,last);

}