#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number :");
    scanf("%d", &a);
    if (a % 2 != 0)
    {
        for (int i = 1; i <= a; i++)
        {
            printf("\n");
            for (int j = 1; j <= a; j++)
            {
                if (j == (a / 2) + 1 || i == (a / 2) + 1)
                    printf("*");
                else
                    printf(" ");
            }
        }
    }
    else
    {
        printf("Error! Enter a odd number");
    }

    return 0;
}