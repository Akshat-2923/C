#include <stdio.h>
#include<string.h>
int main()
{
    char str[40];
    int arr[7] = {1, 2, 3, 4, 3, 2, 1};
    for (int i = 0; i <= 6; i++)
    {
        for (int j = 6; j >= 0; j--)
        {
            if (i == j)
            {
                break;
            }
            if (arr[i] == arr[j])
            {
               strcpy(str, "It is a Palindrome");
            }
        }
    }
    printf("%s",str);
    return 0;
}