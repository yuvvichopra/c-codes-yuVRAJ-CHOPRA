#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter the first number:");
    scanf("%d", &a);
    printf("enter the second number:");
    scanf("%d", &b);
    printf("enter the third number:");
    scanf("%d", &c);
    
    if(a>b && a>c)
    {printf("First number is the largest:%d",a);
    
}
else if(b>a && b>c)
{printf("Second number is the largest:%d",b);
}
else
printf("Third number is the largest:%d",c);
    return 0;
}
