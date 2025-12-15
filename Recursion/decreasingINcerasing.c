#include <stdio.h>
void increasing(int n)
{
    if (n == 0) // Base Case
        return;
    printf("%d\n", n); // For Decreasing
    increasing(n - 1); // Call
    printf("%d\n", n); // For Increasing
    return;
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    increasing(n);
    return 0;
} 