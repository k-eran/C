#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter the 1st number: ");
    scanf("%d", &a);

    printf("Enter the 2nd number: ");
    scanf("%d", &b);

    printf("Enter the 3rd number: ");
    scanf("%d", &c);

    if(a>b)
    {
        if(a>c)
        {
            printf("%d is greatest in all three.", a);
        }
        else
        {
            printf("%d is greatest in all three.", c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("%d is greatest in all three.", b);
        }
        else
        {
            printf("%d is greatest in all three.", c);
        }
    }

    return 0;
}