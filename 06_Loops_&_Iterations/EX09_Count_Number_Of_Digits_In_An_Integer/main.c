/* 
 
Author : "Sherif_Ashraf".

Version : "v-1.0".

Program : "Write a C program to input a number from user and count number of digits in 
the given integer using loop. How to find total digits in a given integer using loop in
C programming. Logic to count digits in a given integer without using loop in C program".

*/

#include<stdio.h>

void main(void)
{
	int n,temp,counter=0;
	printf("Enter number to count its digits \n");
	scanf("%d",&n);
	temp = n;
	while(temp!=0)
	{
		counter++;
		temp = temp/10;
	}
	printf("number of digits in %d = %d",n,counter);
}