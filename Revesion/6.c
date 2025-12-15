#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int p = 0;
    int i = 1;
    while (i <= n)
    {
        if (n % i == 0)
        {
            p++;
        }
        i++;
    }

    if (p == 2)
    {
        printf("%d is prime", n);
    }
    else
        printf("%d is composite(not prime)", n);

    return 0;
}