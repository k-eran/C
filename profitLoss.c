#include<stdio.h>
int main()
{
    printf("Profit or Loss? \n");

    float SP;
    printf("Enter the Selling Price: ");
    scanf("%f", &SP);

    float CP;
    printf("Enter the Cost Price: ");
    scanf("%f", &CP);

    if (SP==CP)
    {
        printf("There is no Loss or Profit.");
    }

    if (SP>CP)
    {
        int profit;
        profit=SP-CP;
        printf("You're in profit by Rs. %d.", profit);
    }
    if (SP<CP)
    {
        int loss;
        loss=CP-SP;
        printf("You're in loss by Rs. %d.", loss);
        
    }


    return 0;
}