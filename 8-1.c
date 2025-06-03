#include<stdio.h>
int main(void){
    int i = 1, total = 0;
    while(i<=100){
        total += i;
        i++;
    }
    printf("The total from 1 to 100 is %d.\n",total);
    return 0;
}