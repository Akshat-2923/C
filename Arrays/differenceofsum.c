#include <stdio.h>
int main()
{
    int arr[5] = {301, 302, 303, 304, 305};
    int even = 0;
    int odd = 0;
    for (int i = 0; i <= 4; i++)
    {
        if (i % 2 == 0)
        {
            even = even + arr[i];
        }
        else
        {
            odd = odd + arr[i];            
        }
    }
    int diff = even - odd;
    printf("The Difference is: %d", diff);
    return 0;
}