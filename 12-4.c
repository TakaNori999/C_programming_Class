#include<stdio.h>
void func(int n,char from_rod,char to_rod,char aux_rod);
int main(void){
    func(3,'A','B','C');
    return 0;
}
void func(int n,char from_rod,char to_rod,char aux_rod){
    if(n==1){
        printf("Move disk 1 from %c to %c \n",from_rod,to_rod);
        return;
    }
    func(n-1,from_rod,aux_rod,to_rod);
    printf("Move disk %d from %c to %c \n",n,from_rod,to_rod);
    func(n-1,aux_rod,to_rod,from_rod);
}

