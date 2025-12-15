#include <stdio.h>

int powers(int base, int power)
{
    if (power == 0)
        return 1;
    int q = powers(base, power / 2);
    if (power % 2 == 0)
        return q * q;
    else
        return q * q * base;
}
int main()
{
    int base, power;
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the power: ");
    scanf("%d", &power);

    int pow = powers(base, power);
    printf("%d", pow);
    return 0;
}