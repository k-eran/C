#include<stdio.h>
#define PI 3.1459
int main ()
{
    float radius;
    printf("Enter the Radius of Sphere: ");
    scanf("%f", &radius);

    float volume;
    volume = 4.0/3 * PI * radius * radius * radius;
    printf("The volume of Sphere is: %f", volume );
    
    return 0;
}