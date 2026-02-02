#include <stdio.h>

struct Student
{
    int roll;
    char name[30];
    float marks;
};

int main(void)
{
    struct Student s[3] = {
        {1, "Rahul", 85.5f},
        {2, "Anita", 92.0f},
        {3, "Vikram", 78.0f}};

    int i;
    for (i = 0; i < 3; i++)
    {
        printf("Student %d:\n", i + 1);
        printf("  Roll  : %d\n", s[i].roll);
        printf("  Name  : %s\n", s[i].name);
        printf("  Marks : %.2f\n", s[i].marks);
    }

    return 0;
}
