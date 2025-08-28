#include <stdio.h>

int main()
{
   int a,b, answer=0;
   char sign;
   printf("enter number 1:");
   scanf("%d", &a);
   printf("enter number 2:");
   scanf("%d", &b);
   printf("enter the operation you want to perform:");
   scanf(" %c", &sign);
  
  if(sign== '+'){
  answer= a+b;
  printf("%d", answer);
  }
  else if (sign=='-'){
  answer= a-b;
  printf("%d", answer);
  }
  else if (sign== '/'){
  answer= a/b;
  printf("%d", answer);
  }
  else {
  answer=a*b;
  printf("%d", answer);
  }

    return 0;
}
