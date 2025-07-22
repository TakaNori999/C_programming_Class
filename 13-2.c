#include<stdio.h>
#include<string.h>
int main(void){
    char str[30];
    printf("Enter your name = ");
    fgets(str, sizeof(str), stdin);
    char *p;
    p = str;
    int length = strlen(str);
    printf("%s\n", str);
    for(int i=length-1;i>=0;i--){
        printf("%c", *(p+i));
    }
}