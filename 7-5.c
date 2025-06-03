#include<stdio.h>
int main(void){
    int gender,i;
    printf("What is your gender? 0=Male, 1=Female\n");
    scanf("%d",&gender);
    if(gender==1){
        printf("Are you pregnant? No=0,Yes=1\n");
        scanf("%d",&i);
        if(i==1){
            printf("Sorry.You can't drink alcohol.\n");
        }else{
            printf("You can drink alcohol.\n");
        }
    }else{
        printf("Are you over 20 years old? No=0,Yes=1\n");
        scanf("%d",&i);
        if(i==1){
            printf("You can drink alcohol!!\n");
        }else{
            printf("You can't drink alchol...\n");
        }
    }
    return 0;
}
