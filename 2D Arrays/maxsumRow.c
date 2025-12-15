#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter number of rows:");
    scanf("%d", &r);
    printf("Enter number of rows:");
    scanf("%d", &c);
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d ", &arr[i][j]);
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

    int sum_row = 0;
    int row_index = 0;

    for (int i = 0; i < r; i++)
    {
        int sum = 0;
        for (int j = 0; j < c; j++)
        {
            sum += arr[i][j];
        }
        if (sum > sum_row)
        {
            sum_row = sum;
            row_index = i+1;
        }
    }
    printf("row %d has the largest sum = %d", row_index, sum_row);
    return 0;
}
