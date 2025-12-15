#include <stdio.h>
void reverse(int arr[], int si, int ei)
{
    for (int i = si, j = ei; i <= j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}
int main()
{
    int arr[7] = {301, 302, 303, 304, 305, 306, 307};

    int si, ei;
    printf("Enter the starting index: ");
    scanf("%d", &si);
    printf("Enter the ending index: ");
    scanf("%d", &ei);

    reverse(arr, si, ei);

    for (int i = 0; i <= 6; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}