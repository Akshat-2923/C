#include <stdio.h>
int main()
{
    int x;
    printf("Enter a numeber");
    scanf("%d", &x);
    x % 2 == 0 ? printf("Even") : printf("Odd");
    return 0;
}