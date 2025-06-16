#include<stdio.h>
int main(void){
    int sum = 0;
    for(int i=1;i<=100;i++){
        if(i%3==0){
            sum += i;
        }
        if(sum>=150){
            break;
        }
    }printf("The total is %d\n",sum);
    return 0;
}