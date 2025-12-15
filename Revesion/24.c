#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the length of rectangle:");
    scanf("%d", &a);
    printf("Enter the breadth of rectangle:");
    scanf("%d", &b);
    for (int i = 1; i <= b; i++)
    {
        printf("\n");
        for (int j = 1; j <= a; j++)
        {
            if (i == 1 || i == b || j == 1 || j == a)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
    }
    return 0;
}