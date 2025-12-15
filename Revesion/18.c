#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    for (int i = a; i > 0; i--)
    {
        for (int q = i; q > 0; q--)
        {
            printf("* ");
        }
        printf("\n");
    }
}