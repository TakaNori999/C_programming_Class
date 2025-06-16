#include<stdio.h>
int main(void){
    int sum = 0;
    for(int i=100;i<=1000;i+=2){
        sum += i;
    }
    printf("The sum of even numbers is %d\n",sum);
    return 0;
}