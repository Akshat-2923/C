#include<stdio.h>
int main(){
    int x ,d,ap,n;
    printf("Enter the first term :");
    scanf("%d",&x);
    printf("Enter the common difference :");
    scanf("%d",&d);
    printf("Enter the number of terms :");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        ap = x + i * d;
        printf("AP : %d ", ap);
    }
    printf("\n");
    
    return 0;
}