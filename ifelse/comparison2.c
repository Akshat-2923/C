#include <stdio.h>
int main()
{
    int ram, shyam, ajay;
    printf("Enter Age of Ram:");
    scanf("%d", &ram);
    printf("Enter Age of Shyam:");
    scanf("%d", &shyam);
    printf("Enter Age of Ajay:");
    scanf("%d", &ajay);
    // if (ram < shyam && ram < ajay)
    // {
    //     printf("Ram is the youngest");
    // }
    // else if (shyam < ram && shyam < ajay)
    // {
    //     printf("Shyam is the youngest");
    // }
    // else if (ajay < ram && ajay < shyam)
    // {
    //     printf("Ajay is the youngest");
    // }
    // else if (ram == shyam && ram == ajay)
    // {
    //     printf("All are of equal age");
    // }
    if (ram > shyam)
    {
        if (ram > ajay)
            printf("ram is oldest");
        else
            printf("ajay is oldest");
    }
    else
    {
        if (shyam > ajay)
            printf("shyam is oldest");
        else
            printf("ajay is oldest");
    }

    return 0;
}