#include<stdio.h>
int main(void){
    int i = 32;
    int j = 13;
    int d,r;
    d = i / j;
    r = i % j;
    printf("The division is %d\n", d);
    printf("The reminder is %d\n", r);
    return 0;
}