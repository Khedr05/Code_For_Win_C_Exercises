/* 
 
Author : "Sherif_Ashraf".

Version : "v-1.0".

Program : "Write a C program to input a number from user 
and swap first and last digit of the given number. How to swap 
first and last digits of a number in C programming. Logic to swap 
first and last digit of a number in C program".
*/

#include<stdio.h>
#include<math.h>
void main(void)
{
    int num,swapped_num,first,last,no_of_digits;

    printf("Enter number \n");
    scanf("%d",&num);

    last = num % 10;
    no_of_digits = log10(num); 

    first = (num / pow(10,no_of_digits)); 

    swapped_num = last;
    swapped_num *= pow(10,no_of_digits);
    swapped_num += num % ((int)pow(10,no_of_digits));
    swapped_num -= last;
    swapped_num += first;

    printf("before swap number = %d \n",num);
    printf("after swap number = %d \n",swapped_num);

}