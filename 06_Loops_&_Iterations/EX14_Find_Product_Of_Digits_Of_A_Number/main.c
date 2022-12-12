/* 
 
Author : "Sherif_Ashraf".

Version : "v-1.0".

Program : "Write a C program to input a number from user and calculate 
product of its digits. How to find product of digits of a number using
loop in C programming. Logic to find product of digits of a given number in C program".
*/

#include<stdio.h>
void main(void)
{
	int n,i,last,product=1;
	printf("Enter number \n");
	scanf("%d",&n);
	i=n;
	while(i!=0)
	{	last=i%10;
		i=i/10;
		product*=last;
	}
	printf("product of digit of number %d = %d",n,product);
}