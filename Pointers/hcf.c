#include <stdio.h>

int min(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}
int maximum(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
int gcd(int a, int b)
{
    int hcf;
    for (int i = min(a,b); i >= 1; i--)// loop ulta chal rha hai fpr better optimization
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
        break;
    }
    return hcf;
}
int main()
{
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    int hcf = gcd(a, b);
    printf(" The HCF/GCD of %d and %d is: %d", a, b, hcf);
    return 0;
}