#include <stdio.h>
#include<string.h>
int main() {
    char number[4] = {0} ; 
    char target[] = "0000";
    while (1) { 
        printf("Please enter your 4-digit PIN number ");
        scanf("%4s", &number);
        if (strcmp(number,target)==0) {
            printf("The correct value!！");
            break;
        } else {
            printf("That' wrong. Once again\n");
        }
    }
    return 0;
}
