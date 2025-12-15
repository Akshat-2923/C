#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    int r, c;
    printf("Enter The number of rows and col:");
    scanf("%d %d", &r, &c);
    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr[i][j] = rand() % 2;
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    int row_index = 0;
    for (int i = 0; i < r; i++)
    {
        int count = 0;
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] == 1)
            {
                count++;
            }
        }
        if (row_index < count)
        {
            row_index = count;
        }
    }
    printf("%d", row_index);
    return 0;
}