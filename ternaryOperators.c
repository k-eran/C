#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    num>99 && num<1000 ? printf("The number is 3 digit") : printf("The number isn't 3 digit");

    return 0;
}