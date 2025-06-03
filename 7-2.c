#include<stdio.h>
int main(void){
    double a,b,c;
    printf("a=,b=,c=");
    scanf("%lf,%lf,%lf",&a,&b,&c);
    if(a>=b&&a>=c){
        printf("MAX=%.4f\n",a);
    }else if(b>=a&&b>=c){
        printf("MAX=%.4f\n",b);
    }else{
        printf("MAX=%.4f\n",c);
    }return 0;
}