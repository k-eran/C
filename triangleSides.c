#include<stdio.h>
int main()
{
    int side1;
    printf("Enter the 1st side: ");
    scanf("%d", &side1);

    int side2;
    printf("Enter the 2nd side: ");
    scanf("%d", &side2);

    int side3;
    printf("Enter the 3rd side: ");
    scanf("%d", &side3);

    if(side1+side2>side3 || side1+side3>side2 || side2+side3>side1)
    {
        printf("The triangle is possible with the given side %d, %d, %d", side1, side2, side3);
    }

    else 
    {
        printf("The triangle isn't possible with the given side %d, %d, %d", side1, side2, side3);
    }

    return 0;
}