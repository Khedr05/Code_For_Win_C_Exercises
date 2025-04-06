/* 
 
Author : "Sherif_Ashraf".

Version : "v-1.0".

Program : "Write a C program to input a number from user and 
find reverse of the given number using for loop. How to find 
reverse of any number using loop in C program. Logic to find 
reverse of a number in C programming".
*/

#include<stdio.h>

void main(void)
{
	int n,copy_of_n,reversed_num=0,last;
	printf("Enter number \n");
	scanf("%d",&n);
	copy_of_n = n;
	while(n!=0)
	{	last=n%10;
		n=n/10;
		reversed_num = (reversed_num*10) + last;
	}
	printf("reverse number of %d = %d",copy_of_n,reversed_num);
}