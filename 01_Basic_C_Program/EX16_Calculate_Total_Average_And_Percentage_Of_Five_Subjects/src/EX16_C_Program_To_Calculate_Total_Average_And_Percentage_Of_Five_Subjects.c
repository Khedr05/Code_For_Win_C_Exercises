/*
 ============================================================================
 Name        : EX16_C_Program_To_Calculate_Total_Average_And_Percentage_Of_Five_Subjects.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float math,bio,phy,eng,arb,total,avg,per;
	printf("Enter Degrees Of Subject In Order Math-Bio-Phy-Eng-Arb \n");
	fflush(stdout);
	scanf("%f %f %f %f %f",&math,&bio,&phy,&eng,&arb);
	total = math+bio+phy+eng+arb;
	avg = total/5;
	per = (total / 500)*100;
    printf("Total Marks = %.2f\n",total);
    printf("Average Marks = %.2f\n",avg);
    printf("Percentage = %.2f%%",per);
}
