#include <stdio.h>
int main(){
   int a,b;
   printf("enter the first number:" );
   scanf("%d", &a);
   printf("enetr the second number:");
   scanf("%d", &b);
 
   int sum= a+b;
   int sub=a-b;
   int divi=a/b;
   int mul=a*b;
   printf("sum is:%d\n", sum);
   printf("substraction is:%d\n", sub);
   printf("division is:%d\n", divi);
   printf("multiplication is:%d\n", mul);
    return 0;
}
