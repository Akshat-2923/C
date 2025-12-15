#include <stdio.h>
int main()
{
    float l, b;
    printf("Enter Length :");
    scanf("%f", &l);
    printf("Enter Breadth :");
    scanf("%f", &b);
    float area = l * b;
    float perimeter = 2 * (l + b);
    if (area > perimeter)
    {
        printf("Area is greater than perimeter");
    }
    else if (perimeter > area)
    {
        printf("Perimeter is greater than area");
    }
    else
    {
        printf("Perimeter is equal to area");
    }

    return 0;
}