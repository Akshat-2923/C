#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        for (int j = 0; j <= a-i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= a; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}