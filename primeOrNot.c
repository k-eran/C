// WRITING A PROGRAM TO CHECK IF THAT NUMBER IS PRIME OR NOT.

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    int a=0;
    int n;
    for(n=2; n<=num-1; n++)
    {
        if(num%n==0)
        {
            a=1;
            break;
        }
    }
    if(a==0)
    {
        printf("The number %d is prime", num);
    }
    else
    {
        printf("The number %d is composite", num);
    }

    return 0;
}