#include<stdio.h>
int main(void){
    int h,w,s;
    printf("height=,weight=");
    scanf("%d,%d",&h,&w);
    s = h-w;
    if(s>=110){
        printf("size:Y");
    }else if(s>=100){
        printf("size:A");
    }else{
        printf("size:B");
    }
    return 0;
}