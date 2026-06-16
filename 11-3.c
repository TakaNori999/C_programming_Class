#include<stdio.h>
long int func(int x);
int main(void){
    long int n,m,l,c;
    printf("Enter two numbers n,m(n>m) = ");
    scanf("%ld %ld",&n,&m);
    if(n<0||m<0||n<m){
        printf("Error.");
        return 1;
    }
    l = n - m;
    c = func(n)/(func(m)*func(l));
    printf("The number of combination of %ld and %ld is %ld.\n",m,n,c);
    return 0;
}
long int func(int x){
    long int result = 1;
    for(int i=1;i<=x;i++){
        result *= i;
    }
    return result;
}
