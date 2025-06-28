#include<stdio.h>
int main()
{
    int age1;
    printf("Enter age of Peter: ");
    scanf("%d", &age1);

    int age2;
    printf("Enter age of Victor: ");
    scanf("%d", &age2);

    int age3;
    printf("Enter age of Keran: ");
    scanf("%d", &age3);

    if (age1<age2 && age1<age3)
    {
        printf("Peter is the youngest in all.");
    }

    if (age2<age1 && age2<age3)
    {
        printf("Victor is the youngest in all.");
    }

    if (age3<age2 && age3<age1)
    {
        printf("Keran is the youngest in all.");
    }
    return 0;
}