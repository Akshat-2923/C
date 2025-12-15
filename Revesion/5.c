#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int p = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            p++;
        }
    }
    if (p == 2)
    {
        printf("%d is prime", n);
    }
    else
        printf("%d is composite(not prime)", n);

    return 0;
}