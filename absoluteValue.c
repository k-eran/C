#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if (num<0)
    {
        int pro;
        pro= (-1)*num;
        printf("The absolute value is %d", pro);
    }

    else 
    {
        printf("The absolute value is %d", num);
    }

    return 0;
}