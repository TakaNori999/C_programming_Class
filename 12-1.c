#include<stdio.h>
#include<string.h>
int main(void){
    char str[5][20]={"apple","orange","banana","durian","cherry"};
    char temp[20];
    for(int i=0;i<4;i++){
        for(int j=i+1;j<5;j++){
            if(strcmp(str[i],str[j])>0){
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    for(int i=0;i<5;i++){
        printf("%s,", str[i]);
    }
}