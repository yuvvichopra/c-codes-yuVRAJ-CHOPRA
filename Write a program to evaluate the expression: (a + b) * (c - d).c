#include <stdio.h>

int main() {
    int a, b, c, d;
    int result;

    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);
    printf("Enter value of c: ");
    scanf("%d", &c);
    printf("Enter value of d: ");
    scanf("%d", &d);

    
    result = (a + b) * (c - d);

   
    printf("The value of (a + b) * (c - d) is: %d\n", result);

    return 0;
}
