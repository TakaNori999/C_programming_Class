#include<stdio.h>
int main(void){
    int i=0;
    int array[4][5]={{173,165,187,153,160},
                    {76,67,92,53,56},
                    {26,25,29,25,24},
                    {90,85,100,84,78}};
    printf("what's your number : ");
    scanf("%d",&i);
    printf("The person number %d is height=%dcm, weight%dkg, foot size=%dcm, sitting height=%dcm.\n",
    i,array[0][i-1],array[1][i-1],array[2][i-1],array[3][i-1]);
    return 0;
}