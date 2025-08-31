#include <stdio.h>
int main()
{
  int x=5;
int preresult, postresult;

preresult= ++x;
printf("After pre-increment:\n");
printf("x = %d, preResult = %d\n\n",x,preresult);
x = 5;

   
    postresult = x++;
    printf("After post-increment:\n");
    printf("x = %d, postresult = %d\n", x, postresult);
return 0;
}
