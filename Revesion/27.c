#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        for (int x = 1; x <= a - i; x++)
        {
            printf(" ");
        }

        for (int q = 0; q <= i; q++)
        {
            printf("*");
        }
        printf("\n");
    }
}