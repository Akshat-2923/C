#include <stdio.h>
int main()
{
    int a;
    printf("Enter the length :");
    scanf("%d", &a);
    ;
    if (a % 2 != 0)
    {
        for (int i = 1; i <= a; i++)
        {
            for (int j = 1; j <= a; j++)
            {
                if (i == j || i + j == a + 1)
                {
                    printf("* ");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    else
    {
        printf("Error! Enter a odd number");
    }
    return 0;
}