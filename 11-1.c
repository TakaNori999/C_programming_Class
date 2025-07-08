#include<stdio.h>
int func(int x);
int main(void){
    int i,s;
    printf("Enter a integer: ");
    scanf("%d",&i);
    s = func(i);
    printf("The square of %d is %d.\n",i,s);
    return 0;
}
int func(int x){
    int square;
    square = x*x;
    return square;
}