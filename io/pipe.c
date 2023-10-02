#include<stdio.h>

int main(){
    // int is used instead of char
    // to be later able to compare it
    // with EOF
    int current_char;
    while ((current_char = getchar()) != EOF) {
        putchar(current_char);
    }
    printf("%d", EOF); // -1
}
