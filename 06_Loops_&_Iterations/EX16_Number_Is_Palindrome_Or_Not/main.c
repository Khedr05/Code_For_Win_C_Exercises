/* 
 
Author : "Sherif_Ashraf".

Version : "v-1.0".

Program : "Write a C program to input number from user and check number is palindrome
or not using loop. How to check whether a number is palindrome or not using loop in 
C programming. Logic to check palindrome number in C programming".
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
	printf("reverse number of %d = %d \n",copy_of_n,reversed_num);

	if(copy_of_n == reversed_num)
	{
		printf("this number %d is palindrome",reversed_num);
	}
	else
	{
		printf("this number %d is not palindrome",reversed_num);
	}
}