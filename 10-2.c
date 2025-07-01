#include<stdio.h>
#include<math.h>
int main(void){
    int array[10];
    double sum=0,m=0,v=0,s=0;
    for(int i=0;i<10;i++){
        printf("Enter a score : ");
        scanf("%d",&array[i]);
        sum += array[i];
    }
    m = sum/10.0;
    for(int i=0;i<10;i++){
        v += ((array[i]-m)*(array[i]-m));
    }
    v = v/10.0;
    s = sqrt(v);
    printf("mean=%.2f,variance=%.2f,standard deviation=%.2f\n",m,v,s);
    return 0;
}