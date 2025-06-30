#include<stdio.h>
int main()
{
    int i;
    printf("Enter the number whose table you want to print: ");
    scanf("%d", &i);

    int n;

    for(n=i; n<=i*10; n=i+n)
    {
        printf("%d ", n);
    }

    return 0;
}