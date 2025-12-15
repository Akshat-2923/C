#include <stdio.h>
int main()
{
    int a[5] = {77, 56, 32, 12, 10};
    for (int i = 0; i <= 4; i++)
    {
        if (a[i] < 35)
        {
            printf("%d ",i);
        }
        
    }
    
    return 0;
}