#include <stdio.h>
int main()
{
  float a;
  printf("Enter the Rational Number:");
  scanf("%f", &a);

  int b=a;
  
  float c=(a-b);
  printf("The fractional part is:%f", c);
    
  return 0;

}