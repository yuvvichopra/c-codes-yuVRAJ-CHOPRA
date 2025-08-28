#include <stdio.h>

int main()
{
    int num,i,factorial=1;
    printf("Enter the number you want to find factorial of:");
    scanf("%d", &num);
    for(i=num; i>= 1; i--)
    factorial=(factorial*i);
    printf("The factorial is:\n %d",factorial);

    return 0;
}
