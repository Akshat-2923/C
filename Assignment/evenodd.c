#include<stdio.h>
int main(){
    int x;
    printf("Enter a positive integer :");
    scanf("%d",&x);
    if (x%2 == 0)
    {
        printf("The given number is even");
    }
    else
    {
        printf("The given number is odd");
    }
    // if (x%2 == 0)
    // {
    //      printf("The given number is even");
    // }
    // if (x%2!=0)
    // {
    //      printf("The given number is odd");
    // }
    
        
     return 0;
}
