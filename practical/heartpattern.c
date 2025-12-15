#include<stdio.h>   

int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Print the upper part of the heart
    for (int i = n / 2; i <= n; i += 2)
    {
        // Print spaces
        for (int j = 1; j < n - i; j += 2)
        {
            printf(" ");
        }
        // Print stars
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        // Print spaces
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        // Print stars
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Print the lower part of the heart
    for (int i = n; i >= 1; i--)
    {
        // Print spaces
        for (int j = i; j < n; j++)
        {
            printf(" ");
        }
        // Print stars
        for (int j = 1; j <= (i * 2) - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}