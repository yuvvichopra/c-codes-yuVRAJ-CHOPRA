#include <stdio.h>

int main() {
    char name[50];
    int age;
    float percentage;
    
    printf("Enter your name: ");
    scanf("%s", name); 
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("Enter percentage scored: ");
    scanf("%f", &percentage);
    
    printf("\nYour Name: %s\n", name);
    printf("Your Age: %d\n", age);
    printf("Percentage you scored: %.2f\n", percentage);

    return 0;
}
