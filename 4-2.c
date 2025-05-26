#include<stdio.h>
int main(void){
    char i[4] = {0};
    printf("Enter today's date = ");
    scanf("%s", &i);
    printf("Today is %s.", i);
    return 0;
}