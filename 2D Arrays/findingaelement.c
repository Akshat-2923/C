#include<stdio.h>
int main()
{
    int r,c,find,flag = 0;
    printf("Enter Number of rows & columns:");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    printf("Enter the elements:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The entered Matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("Enter the element to find:");
    scanf("%d",&find);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] == find)
            {
                flag = 1;
                break;
            }
            
        }
        if (flag == 1){
            break;
        }
        
    }
    if (flag == 1)
    {
        printf("Element %d found in the matrix.\n"  , find);
    }
    else
    {
        printf("Element %d not found in the matrix.\n" , find);
    }
    return 0;
}