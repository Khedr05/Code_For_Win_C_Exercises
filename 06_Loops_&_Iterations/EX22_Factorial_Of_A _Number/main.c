#include<stdio.h>

void main(void)
{
	int num,fac=1;
	printf("enter number \n");
	scanf("%d",&num);

	for(int i=1;i<=num;i++)
	{
		fac *=i;
	}

	printf("Factorial Of %d = %d",num,fac);
}