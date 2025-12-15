#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int p = 0;
    for (int i = 1; n != 0; i++)
    {
        p = n % 10;
        n /= 10;
        printf("%d", p);
    }
    return 0;
}