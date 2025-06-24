#include<stdio.h>
#include<math.h>
int main(void){
    int i;
    printf("Enter an integer = ");
    scanf("%d",&i);
    double s = sqrt(i);
    double p = pow((i),2);
    printf("square root=%.2f\nsquare=%.2f\n",s,p);
    return 0;
}