#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        for (int q = 0; q <= i; q++)
        {
            printf("* ");
        }
        printf("\n");
    }
}