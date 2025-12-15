#include <stdio.h>
int main()
{
    char name[50], course[50], college[100];
    int age;
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your course: ");
    scanf("%s", course);
    printf("Enter your college: ");
    scanf("%s", college);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("\n--- User Information ---\n");
    printf("Name: %s", name);
    printf("Age: %d years\n", age);

    printf("\n================================\n");
    printf("          STUDNET PROFILE           ");
    printf("\n================================\n");
    printf("Name %s\n", name);
    printf("College %s\n", college);
    printf("Course %s\n", course);
    printf("Age: %d\n", age);
    return 0;
}