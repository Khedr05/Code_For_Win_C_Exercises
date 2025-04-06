/* 
 
Author : "Sherif_Ashraf".

Version : "v-1.0".

Program : "Write a C program to input a number from user and print 
it into words using for loop. How to display number in words using
loop in C programming. Logic to print number in words in C programming".
*/

#include<stdio.h>

void main(void)
{
	int n,copy_of_n,last,reversed_num=0,end_digit;
	printf("Enter number \n");
	scanf("%d",&n);
	copy_of_n = n;
	while(n!=0)
	{	last=n%10;
		n=n/10;
		reversed_num = (reversed_num*10) + last;
	}
	 	while(reversed_num!=0)
		{
	 		end_digit = reversed_num % 10; 
	 		reversed_num = reversed_num /10;
	 		switch(end_digit)
			{
			case 1:
				printf("one ");
				break;
			case 2:
				printf("two ");
				break;
			case 3:
				printf("three ");
				break;
			case 4:
				printf("four ");
				break;
			case 5:
				printf("five ");
				break;
			case 6:
				printf("six ");
				break;
			case 7:
				printf("seven ");
				break;
			case 8:
				printf("eight ");
				break;
			case 9:
				printf("nine ");
				break;
			}
		}	
}