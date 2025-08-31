#include <stdio.h>
#define PI 3.14

int main()
{
  float r, a;
  printf("enter the radius of the circle:");
  scanf("%f",&r);
  
  a=PI*r*r;
  printf("The area is: %.2f", a);
  
  return 0;
}
