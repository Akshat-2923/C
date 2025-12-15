#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number :");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        char n = 65;
        printf("\n");
        for (int j = 1; j <= a; j++)
        {
            printf(" %c ", n);
            n++;
        }
    }
    return 0;
}