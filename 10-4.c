#include<stdio.h>
int main(void){
    int array[5];
    int temp=0;
    for(int i=0;i<5;i++){
        printf("The number is :");
        scanf("%d",&array[i]);
    }
    for(int i=0;i<4;i++){
        for(int j=i+1;j<5;j++){
            if(array[i]<array[j]){
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    for(int i=0;i<5;i++){
        printf("%d,",array[i]);
    }
    return 0;
}