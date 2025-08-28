#include <stdio.h>

int main()
{
    char name[50], course[50], university[100];  

    printf("Enter your name: ");
    scanf("%49s", name);   // takes string input (till space)

    printf("Enter your course: ");
    scanf("%49s", course);

    printf("Enter your university: ");
    scanf("%99s", university);

    printf("\n--- User Details ---\n");
    printf("Name: %s\n", name);
    printf("Course: %s\n", course);
    printf("University: %s\n", university);

    return 0;
}
