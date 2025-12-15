#include <stdio.h>
#include <ctype.h>

int main()
{
    printf("%s\n%s%s\n%s%s\n\n" ,"According to isdigit",
    isdigit('8') ? "8 is a " : "8 is not a", "digit",
    isdigit('#') ? "# is a " : "# is not a", "digit");
    printf("%c",tolower('A'));
}