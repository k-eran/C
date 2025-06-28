#include<stdio.h>
int main()
{
    printf("Area or Perimeter!\n");

    int l;
    printf("Enter the Length of rectangle: ");
    scanf("%d", &l);
    
    int b;
    printf("Enter the Bredth of rectangle: ");
    scanf("%d", &b);

    int a;
    a = l * b ;
    
    int p;
    p = 2 *  l + b  ;

    if (a>p)
    {
        printf("The area is greater than perimeter. ");
    }
    
    else
    {
        printf("The area is less than perimeter. ");
    }

    return 0;
}