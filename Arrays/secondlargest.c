#include <stdio.h>
#include <limits.h>
int main()
{

    int arr[9] = {45, 32, 567, 765, 2342, 13, 456, 785};
    int max = INT_MIN;
    int smax = INT_MIN;
    for (int i = 1; i <= 8; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    // max = 2342
    for (int i = 1; i <= 8; i++)
    {
        if (arr[i] != max && smax < arr[i])
            smax = arr[i];
    }
    printf("largest is %d\n", max);
    printf("second largest is %d", smax);
    return 0;
}