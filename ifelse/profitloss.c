#include<stdio.h>
int main(){
    float cp, sp;
    printf("Enter CP :");
    scanf("%f",&cp);
    printf("Enter SP :");
    scanf("%f",&sp);

    if (cp>sp){
        printf("The vendor had made profit \n");
        printf("Profit :%f",cp-sp);
    }
    else if (sp>cp){
        printf("The vendor had suffered loss \n");
        printf("Loss :%.1f",sp-cp);
    }
    else{
        printf("There is no profit as well as no loss");
    }
    
}