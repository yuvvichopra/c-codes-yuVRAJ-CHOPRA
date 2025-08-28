#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    if (a % 7 == 0 || a % 11 == 0) {
        printf("The number is divisible by 7 or 11\n");
    } else {
        printf("The number is not divisible by 7 or 11\n");
    }

    return 0;
}
