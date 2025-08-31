#include <stdio.h>

int main() {
    float m1, m2, m3, avg;
    printf("Enter marks of subject 1: ");
    scanf("%f", &m1);
    printf("Enter marks of subject 2: ");
    scanf("%f", &m2);
    printf("Enter marks of subject 3: ");
    scanf("%f", &m3);
    avg = (m1 + m2 + m3) / 3;
    printf("Average marks: %.2f\n", avg);
    return 0;
}
