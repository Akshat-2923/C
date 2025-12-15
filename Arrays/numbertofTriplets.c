#include <stdio.h>
int main()
{
    int x = 10;
    printf("Enter a number: ");
    scanf("%d", &x);
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int pairs = 0;
    for (int i = 0; i <= 8; i++)
    {
        for (int j = i + 1; j <= 8; j++) // for total number of distict pairs use -> j = i + 1 else for all pairs use -> j = 0
        {
            for (int k = j + 1; k <= 8; k++)// for total number of distict pairs use -> k = j + 1 else for all pairs use -> k = 0
            {
                if (arr[i] + arr[j] + arr[k] == x)
                {
                    pairs++;
                    printf("(%d,%d,%d)\n", arr[i], arr[j], arr[k]);
                }
            }
        }
    }
    if (pairs == 0)
        printf("No such triplets");
    else
        printf("The number of triplets: %d", pairs);
    return 0;
}