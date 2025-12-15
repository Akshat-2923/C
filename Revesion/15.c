#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter two numbers: ");
    scanf("%d %d", &n, &m);
    int p = 1;
    for (int i = 1; i <= m; i++)
    {
        p = p * n;
    }
    printf("%d", p);
    return 0;
}