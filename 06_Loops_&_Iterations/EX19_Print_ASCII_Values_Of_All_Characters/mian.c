/* 
 
Author : "Sherif_Ashraf".

Version : "v-1.0".

Program : "Write a C program to print ASCII values of all characters using for loop.
How to display ASCII character codes with their values in C programming using loop.
C program to print ASCII character with their character code".
*/


#include <stdio.h>

void main(void)
{
    for(int i=0;i<=255;i++) 
    {
        printf("ASCII value of char %c = %d\n",i,i);
    }
}