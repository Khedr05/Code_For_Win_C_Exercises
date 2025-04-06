/* 
 
Author : "Sherif_Ashraf".

Version : "v-1.0".

Program : "Write a C program to count frequency of digits in a given number.
How to find frequency of digits in a given number using loop in C programming. 
Logic to find total occurrences of each digits in a given number in C program".
*/

#include<stdio.h>

void main(void)
{
	int n,copy_of_n,last,arr_of_freq[10]={0};
	printf("Enter number \n");
	scanf("%d",&n);
	copy_of_n = n;
	while(n!=0)
	{	last=n%10;
		n=n/10;
		arr_of_freq[last]++;	
	}
	
	for(int i=0;i<10;i++)
	{
		printf("frequency of %d = %d \n",i,arr_of_freq[i]);
	}
}