#include<stdio.h>
#include<math.h>
#define square(x) ((x)*(x))
int main(void){
    double a,b,c;
    printf("Enter two real numbers = ");
    scanf("%lf %lf",&a,&b);
    c = sqrt(square(a)+square(b));
    printf("area=%.2f\n",c);
    return 0;
}