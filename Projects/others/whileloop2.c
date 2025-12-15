#include<stdio.h>
int main(){
    int x , i=1;
    printf("Enter the Number you want table for : ");
    scanf("%d",&x);
    while (i<=10)
    {
        printf(" %d x %d  = %d\n",x,i , x*i);
        i++;
    }
    return 0;
}