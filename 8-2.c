#include<stdio.h>
#include<math.h>
int main(void){
    int i = 1;
    double a,b,c;
    while(i<=10){
        a = 1.0/i;
        b = pow(i, 2);
        c = sqrt(i);
        printf("%d : Recipocal=%.2f,Square=%.2f,Square root=%.2f\n",i,a,b,c);
        i++;
    }
    return 0;
}