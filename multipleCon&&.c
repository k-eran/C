#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if(num>5 && num<10)
    {
        printf("The number is between 5 & 10");
    }

    else
    {
        printf("The number do not lie between 5 & 10");
    }

    return 0;
}