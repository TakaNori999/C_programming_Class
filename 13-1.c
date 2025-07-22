#include<stdio.h>
int main(void){
    int n[10];
    int sum = 0;
    double ave;
    int *p;
    p = n; 
    for(int i=0;i<10;i++){
        printf("Enter the %d integer = ", i+1);
        scanf("%d", p+i);
        sum += *(p+i);
    }
    printf("sum = %d\n", sum);
    ave = sum / 10.0;
    printf("Average = %.2f\n", ave);
    return 0;
}