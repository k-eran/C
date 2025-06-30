#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number, for how many times you want to print 'Hello Keran'. :");
    scanf("%d", &n);

    for(int i=1; i<=n; i=i+1)
    {
        printf("Hello Keran.\n");
    }
    return 0;
}