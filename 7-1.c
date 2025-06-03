#include<stdio.h>
int main(void){
    int a,b;
    printf("a=,b=");
    scanf("%d,%d",&a,&b);
    if(a>b){
        printf("a=%d\n",a);
    }else if(b>a){
        printf("b=%d\n",b);
    }else{
        printf("same number\n");
    }return 0;
}