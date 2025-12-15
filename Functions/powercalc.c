#include <stdio.h>

int powers(int base, int power)
{
    int pow = 1;
    for (int i = 1; i <= power; i++)
    {
        pow = pow * base;
    }
    return pow; 
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