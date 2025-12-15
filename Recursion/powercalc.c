#include <stdio.h>

int powers(int base, int power)
{
    if (power == 0)
        return 1;
    int recAns = base * powers(base, power - 1);
    return recAns;
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