#include<stdio.h>
int main(void){
    int array[10]={59,40,90,83,59,47,79,69,40,92};
    int max=0,min=100;
    for(int i=0;i<10;i++){
        if(array[i]>=max){
            max=array[i];
        }
        if(array[i]<=min){
            min=array[i];
        }
    }
    printf("The highest score is %d points.\n",max);
    printf("The minimum score is %d points.\n",min);
    return 0;
}