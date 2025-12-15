#include <stdio.h>
int main()
{
    int x = 10;
    printf("Enter a number: ");
    scanf("%d",&x);
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8 ,9};
    int pairs = 0;
    for (int i = 0; i <= 8; i++)
    {
        for (int j = 0; j <= 8; j++) // for total number of distict pairs use -> j = i + 1
        {
            if (arr[i] + arr[j] == x)
            {
                pairs++;
                printf("(%d,%d)\n",arr[i],arr[j]);
            }
        }
    }
    if(pairs == 0) printf("No such pairs");
    else printf("The number of pairs: %d", pairs);
    return 0;
}