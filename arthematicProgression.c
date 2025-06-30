//displaying AP 1,3,5,7,9.. till n terms.

#include<stdio.h>
int main()
{
    int i;
    printf("Enter how many terms you want the AP to be printed.: ");
    scanf("%d", &i);

    int n;

    for(n=1; n<=1+(i-1)*2; n=n+2)
    {
        printf("%d ", n);
    }


    return 0;
}