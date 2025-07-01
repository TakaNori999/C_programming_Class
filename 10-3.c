#include<stdio.h>
int main(void){
    int array[5];
    int temp;
    for(int i=0;i<5;i++){
        printf("Enter a number : ");
        scanf("%d",&array[i]);
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4-i;j++){
            if(array[j]<array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    for(int i=0;i<5;i++){
        printf("%d,",array[i]);
    }
    return 0;
}