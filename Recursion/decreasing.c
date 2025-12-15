#include <stdio.h>
void reverse(int n)
{
    if (n == 0) return;
    printf("%d\n",n);
    reverse(n-1);
    return;
    
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    reverse(n);
    return 0;
}