#include<stdio.h>
int main()
{
    int age;
    printf("Voting System\n");
    printf("Enter Your age:%d", age);
    scanf("%d", &age);
    
    if(age>=18)
    {
        printf("You are eligible for voting\n");
        printf("Choose your Candidate\n");
        printf("");
    }
    
    else
    {
        int needage;
        needage= 18-age;
        scanf("%d", needage);
        printf("You need %d year more to vote");
    } 

   

 return 0;   
}