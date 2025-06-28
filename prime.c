#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter the Number\n");
    scanf("%d", &num1);

    if (num1%1==0 && num1%num1==0)
    {
        printf("The number is Prime");
    
    }
    else {
        printf("The number is not Prime");
    }
    return 0;
}