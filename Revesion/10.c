#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int w = n;
    int p = 0;
    for (int i = 1; n != 0; i++)
    {
        p = p * 10 + (n % 10);
        n /= 10;
    }
    int e = w + p;
    printf("%d", e);

    return 0;
}