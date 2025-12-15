#include <stdio.h>
int main()
{
    float x1;
    printf("Enter first subject marks: ");
    scanf("%f", &x1);
    float x2;
    printf("Enter second subject marks: ");
    scanf("%f", &x2);
    float x3;
    printf("Enter third subject marks: ");
    scanf("%f", &x3);
    float p = (x1 + x2 + x3);
    float a = p / 3;
    printf("Marks : %.1f , %.1f , %.1f \n", x1, x2, x3);
    printf("Total Marks : %.1f \n", p);
    printf("Average Marks : %.1f \n ", a);
    printf("Grade : ");
    if (a >= 90)
    {
        printf("A");
    }
    else if (a >= 80)
    {
        printf("B");
    }
    else if (a >= 70)
    {
        printf("C");
    }
    else if (a >= 60)
    {
        printf("D");
    }
    else
    {
        printf("F");
    }
    return 0;
}