#include<stdio.h>
#include<math.h>
int main(void){
    double x,y,a,b,s;
    printf("Enter two integers = ");
    scanf("%lf %lf",&x,&y);
    a = fabs(x);
    b = fabs(y);
    s = pow(x,y);
    printf("abusolute value1=%.2f\nabusolute value2=%.2f\nmultiplier=%.2f\n",a,b,s);
    return 0;
}