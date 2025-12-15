#include <stdio.h>
#include <string.h>
int main()
{ 
    char str[40];
    int element;
    printf("Enter a number: ");
    scanf("%d", &element);
    int arr[100];
    for (int i = 0; i < 100; i++)
    {
        arr[i] = i;
    }
    for (int j = 0; j <= 101; j++)
    {
        if (element == arr[j])
        {
            strcpy(str, "it is not missing!!");
        }
        else
            strcpy(str, " it is missing");
    }
    printf("%s", str);
    if (element > 100)
    {
        printf("The Entered number is out of bounds of array");
    }
    return 0;
}