#include <stdio.h>
int main()
{
    int i = 1;
    int x;
    printf("Enter the number you want the table for: ");
    scanf("%d", &x);
    for (i = 1; i <= 10; i++)
    {
        printf("%d *%d = %d \n", x, i, x * i);
    }
    return 0;
}