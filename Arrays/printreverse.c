#include <stdio.h>
int main()
{
    int a[5];
    for (int i = 0; i <= 4; i++){
        printf("\nEnter element number %d: ",i+1);
        scanf("\n%d ",&a[i]);
    }
    for (int j = 4; j >= 0 ; j--)
    {
        printf("%d\n",a[j]);
    }
    
    return 0;
}