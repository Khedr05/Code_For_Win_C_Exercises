#include<stdio.h>

void main(void)
{
	int num;
	printf("enter number\n");
	scanf("%d",&num);
	printf("Factors Of %d: ",num);
	for(int i=1;i<=num;i++)
	{
		if(num % i==0)
		{
			printf("%d,",i);
		}
	}
}