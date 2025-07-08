#include<stdio.h>
int func(int x, int y);
int main(void){
    int n,m,a;
    printf("Enter two integers n,m = ");
    scanf("%d %d",&n,&m);
    a = func(n,m);
    printf("The greatest common divisor of %d and %d is %d.\n",n,m,a);
    return 0;
}
int func(int x, int y){
    int r = 0;
    while((x%y)!=0){
        r = x%y;
        x = y;
        y = r;
    }
    return y;
}