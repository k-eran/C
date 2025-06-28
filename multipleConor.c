#include<stdio.h>
int main()
{
    int num;
    printf("Enter the Number: ");
    scanf("%d", &num);

    if (num%5==0 || num%3==0)
    {
        printf("The number is divisible by 5 or 3.");
    }

    else 
    {
        printf("The number is not divisible by 3 or 5.");
    }
    return 0;
}