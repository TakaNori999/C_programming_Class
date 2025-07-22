#include<stdio.h>
#include<string.h>
void str_copy(char *a, char *b);
int main(void){
    char x[30] = "Hello world";
    char y[] = "Good morning";
    printf("x= %s, y=%s\n", x,y);
    str_copy(x, y);
    printf("x= %s, y= %s\n",x,y);
    return 0;
}
void str_copy(char *a, char *b){
    while(*b!='\0'){
        *a = *b;
        a++;
        b++;
    }
    *a = '\0';
}