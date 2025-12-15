#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        char e = 'A';
        for (int q = 0; q < a; q++)
        {
            printf("%c ", e);
            e++;
        }
        printf("\n");
    }
}