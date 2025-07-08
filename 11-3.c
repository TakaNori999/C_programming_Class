#include<stdio.h>
long long func(int x);
int main(void){
    long long n,m,l,c;
    printf("Enter two numbers n,m(n>m) = ");
    scanf("%d %d",&n,&m);
    if(n<0||m<0||n<m){
        printf("Error.");
        return 1;
    }
    l = n - m;
    c = func(n)/(func(m)*func(l));
    printf("The number of combination of %d and %d is %d.\n",m,n,c);
    return 0;
}
long long func(int x){
    long long result = 1;
    for(int i=1;i<=x;i++){
        result *= i;
    }
    return result;
}