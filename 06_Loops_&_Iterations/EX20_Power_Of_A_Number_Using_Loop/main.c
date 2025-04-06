#include<stdio.h>

void main(void)
{
	int base,power=1,expo;

	printf("Enter base then expo \n");
	scanf("%d %d",&base,&expo);

	for(int i=1;i<=expo;i++)
	{
		power = power * base;
	}

	printf("%d ^ %d = %d",base,expo,power);
}