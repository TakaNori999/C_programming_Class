#include<stdio.h>
#define sum(a,b,c,d) ((a)+(b)+(c)+(d))
int main(void){
    double num1,num2,num3,num4,s;
    printf("Enter four real numbers = ");
    scanf("%lf %lf %lf %lf",&num1,&num2,&num3,&num4);
    s = sum(num1,num2,num3,num4);
    printf("Tortal=%.2f\n",s);
    return 0;
}