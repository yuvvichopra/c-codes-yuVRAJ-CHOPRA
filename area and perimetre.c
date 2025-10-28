#include <stdio.h>
int main()
{
  int a,b;
  int area;
  int para;
  scanf("%d",&a);
  scanf("%d",&b);
  area=a*b;
  para=2*(a+b);
  printf("Area: %d, ",area);
  printf("Perimeter: %d",para);
  return 0;
}
