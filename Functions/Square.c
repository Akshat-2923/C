#include <stdio.h>
#include <math.h>
int square(int y)
{ 
    return y * y;
}
int main()
{
    for (int i = 1; i <= 100; ++i)
    {
        printf(" square of %d = %d \n", i, square(i));
    }
    puts("");
}
