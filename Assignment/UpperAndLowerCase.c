#include <stdio.h>
int main()
{
    char x;
    printf("Enter an Alphabet :");
    scanf("%c", &x);
    if (x >= 'a' && x <= 'z')
    {
        printf("Entered Alphabet is lowercase ");
    }
    else if (x >= 'A' && x <= 'Z')
    {
        printf("Entered Alphabet is Uppercase ");
    }
    else
    {
        printf("Invalid Alphabet");
    }

    return 0;
}