#include<stdio.h>
int main(void){
    double a;
    printf("Enter Pi = ");
    scanf("%lf", &a);
    printf("The value of pi you entered is %.10f.\n", a);
    return 0;
}