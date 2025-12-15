#include <stdio.h>
int factorial(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact *= i;
    }
    return fact;
}
int combination(int n, int r)
{
    int ncr = factorial(n) / (factorial(r) * factorial(n - r));
    return ncr;
}
int permutation(int n, int r)
{
    int npr = factorial(n) / factorial(n - r);
    return npr;
}
int main()
{
    int n, r;

    printf("1. Combination\n");
    printf("2. Permutation\n");

    int choice;
    printf("Enter your choice : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:

        printf("Enter n: ");
        scanf("%d", &n);
        printf("Enter r: ");
        scanf("%d", &r);
        if (n < r)
        {
            printf("Error!! , r cannot be greater than n");
            return 1;
        }
        int ncr = combination(n,r);
        printf("Value of NCR is : %d\n", ncr);
        
        break;
    case 2:
        printf("Enter n: ");
        scanf("%d", &n);
        printf("Enter r: ");
        scanf("%d", &r);

        if (r > n)
        {
            printf("Invalid input! r cannot be greater than n.\n");
            break;
        }

        int npr = permutation(n,r);
        printf("Value of nPr is : %d\n", npr);
        break;

    default:
        printf("Invalid Choice!!!\n");
        break;
    }
}