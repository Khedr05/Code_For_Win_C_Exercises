/* 
 
Author : "Sherif_Ashraf".

Version : "v-1.0".

Program : "Write a C program to input a number and find sum of first and last digit
of the number using for loop. How to find sum of first and last digit of a number in
C programming using loop. Logic to find sum of first and last digit of a number without
using loop in C program".

*/

#include<stdio.h>
void main(void)
{
	int n,first,last,sum=0;
	printf("Enter number get first & last digits \n");
	scanf("%d",&n);
	first = n;
	while(first>=10)
	{
		first = first/10;
	}
	last = n%10;

	printf("First = %d \nLast = %d\n",first,last);
	sum = first+last;
	printf("sum of first & last %d + %d = %d",first,last,sum);
}