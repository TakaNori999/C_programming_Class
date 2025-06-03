#include<stdio.h>
int main(void){
    int i = 1, number,answer=55;
    while(i<=10){
        printf("Please enter your 2-digit PIN number ");
        scanf("%d",&number);
        if(number>answer){
            printf("Large number. %d chance!!\n",10-i);
        }else if(number<answer){
            printf("Small number. %d chance!!\n",10-i);
        }else{
            printf("Correct answer!!");
            break;
        }
        i++;
    }
    if(i==11){
        printf("Game over...");
    }
    return 0;
}