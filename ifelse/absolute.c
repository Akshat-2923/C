#include<stdio.h>
int main(){
    int x ;
    printf("Enter the integer :");
    scanf("%d",&x);
    if (x<0)
    {
    x = x*(-1);
    printf("Absolute Value :%d",x);
    }
    else{
        x = x;
        printf("Absolute Value :%d",x);

    }
    
    return 0;
}