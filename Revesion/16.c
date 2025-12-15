#include <stdio.h>
int main()
{
    for (int i = 1; i <= 90; i++)
    {
        printf("%d ", i);
        char a = (char)i;
        printf("%c\n", a);
    }
    return 0;
}