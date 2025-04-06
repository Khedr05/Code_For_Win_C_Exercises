#include<stdio.h>


void main(void)
{
	int num1,num2,LCM,max,i;

	printf("Enter Two Numbers \n");
	scanf("%d %d",&num1,&num2);

	max = (num1>num2)? num1:num2;
	i=max;
	while(1)
    {
        if(i%num1==0 && i%num2==0)
        {
            LCM = i;
            break;
        }

        i += max;
    }

	printf("LCM Of %d & %d = %d",num1,num2,LCM);
}