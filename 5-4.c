#include<stdio.h>
#include<math.h>
int main(void){
    double a = 78;
    double b = 98;
    double c = 87;
    double d = 67;
    double s1,s2,s3,s4 ;
    s1 = a + b + c + d ;
    s2 = s1 / 4.0 ;
    s3 =(pow((a-s2),2)+pow((b-s2),2)+pow((c-s2),2)+pow((d-s2),2))/4.0;
    s4 = sqrt(s3);
    printf("sum = %f\n",s1);
    printf("average = %f\n",s2);
    printf("variance = %f\n", s3);
    printf("SD =  %f\n",s4);
    return 0;
}