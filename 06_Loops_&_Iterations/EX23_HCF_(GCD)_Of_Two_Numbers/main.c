#include<stdio.h>


void main(void)
{
	int num1,num2,HCF,min;

	printf("Enter Two Numbers \n");
	scanf("%d %d",&num1,&num2);

	min = (num1<num2)? num1:num2;

	for(int i=1;i<=min;i++)
	{
		if((num1 % i == 0) && (num2 % i == 0))
		{
			HCF = i;
		}
	} 

	printf("HCF Of %d & %d = %d",num1,num2,HCF);
}