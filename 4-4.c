#include<stdio.h>
int main(void){
    int a = 0;
    printf("Enter a number = ");
    scanf("%d", &a);
    printf("decimal = %d\noctal = %o\nhexadecimal = %x",a,a,a);
    return 0;
}