#include <stdio.h>

void main(void)
{
    int num;
    printf("Enter Number \n");
    scanf("%d",&num);

    switch (num > 0)
    {
        case 1:
            printf("%d Is Positive",num);
        break;
        case 0:
            switch (num < 0)
            {
                case 1: 
                    printf("%d Is Negative",num);
                    break;
                case 0:
                    printf("%d Is Zero",num);
                    break;
            }
        break;
    }
}