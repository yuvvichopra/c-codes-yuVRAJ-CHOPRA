#include <stdio.h>
#include <string.h>

int main() {
    char name[100], course[100], college[100];
    int age, roll;
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter roll number: ");
    scanf("%d", &roll);
    getchar(); // consume newline
    printf("Enter course: ");
    fgets(course, sizeof(course), stdin);
    course[strcspn(course, "\n")] = 0;
    printf("Enter college: ");
    fgets(college, sizeof(college), stdin);
    college[strcspn(college, "\n")] = 0;

    printf("\n----- Student Profile -----\n");
    printf("Name     : %s\n", name);
    printf("Age      : %d\n", age);
    printf("Roll No. : %d\n", roll);
    printf("Course   : %s\n", course);
    printf("College  : %s\n", college);
    return 0;
}
