#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter length: ");
    scanf("%d", &a);
    printf("Enter breadth: ");
    scanf("%d", &b);

    for (int i = 1; i <= a; i++)
    {
        for (int i = 1; i <= a; i++)
        {
            printf(" ");
        }
        for (int j = 1; j <= b; j++)
        {
            if (i == a || i == b)
            {
                printf("* ");
            }
        }
        printf("\n");
    }
}