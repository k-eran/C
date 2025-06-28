#include<stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter the 1st No.:");
    scanf("%d", &num1);
    printf("Enter the 2nd No.:");
    scanf("%d", &num2);
    printf("Enter the 3rd NO.:");
    scanf("%d", &num3);

    if(num1>num2 && num1>num3)
    {
        printf("The 1st No. i.e %d is the greatest.", num1);
    }

    if(num2>num1 && num2>num3)
    {
        printf("The 2nd No. i.e %d is the greatest.", num2);
    }

    if(num3>num1 && num3>num2)
    {
        printf("The 3rd No. i.e %d is the greatest.", num3);
    }


    return 0;
}