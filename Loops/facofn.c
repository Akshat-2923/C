#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number :");
    scanf("%d", &n);
    int pro = 1;
    for (int i = 1; i <= n; i++)
    {
        pro = pro * i;
        printf("Factorial of %d is : %d \n", i, pro);
    }

    return 0;
}
