#include<stdio.h>
int main(void){
    char c1,c2;
    printf("Please enter the initials:");
    scanf("%c%c",&c1,&c2);
    if(c1=='T'&&c2=='Y'){
        printf("Taro Yamada\n");
    }else if(c1=='J'&&c2=='F'){
        printf("Jiro Fukuoka\n");
    }else if(c1=='S'&&c2=='M'){
        printf("Saburo Munakata\n");
    }else if(c1=='H'&&c2=='K'){
        printf("Hanako Kyouiku\n");
    }else if(c1=='N'&&c2=='J'){
        printf("Natsuko Jyouyama\n");
    }else{
        printf("error\n");
    }return 0;
}