#include<stdio.h>
int main(){
    int x , i = 1;
    printf("Enter the number :");
    scanf("%d",&x);
    do{
        printf("%d x %d = %d \n",x,i,x*i);
        i++;
        
    } while (i<=10);

    return 0;
}