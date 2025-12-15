#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int p = 0;
    for (int i = 1; n != 0; i++)
    {
        n = n / 10;
        p++;
    }
    printf("%d", p);
    return 0;
}