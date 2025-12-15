#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a % 2 != 0)
    {
        for (int i = 1; i <= a; i++)
        {
            for (int j = 1; j <= a; j++)
            {
                if (i == (a + 1) / 2 || j == (a + 1) / 2)
                {
                    printf("*");
                }
                else
                    printf(" ");
            }
            printf("\n");
        }
    }
    else
        printf("Enter a odd number!!");
    return 0;
}