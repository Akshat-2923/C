#include <stdio.h>
int maximum(int x, int y, int z)
{
    int max = x;
    if (y > max)
    {
        max = y;
    }
    if (z > max)
    {
        max = z;
    }
    return max;
}
int main()
{
    int number1, number2, number3;
    printf("Enter three numbers:");
    scanf("%d%d%d", &number1, &number2, &number3);
    printf("Maximun is :%d \n", maximum(number1, number2, number3));
}
