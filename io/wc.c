#include<stdio.h>

int main(){
    long newlines = 0;
    int current_char;
    while ((current_char = getchar()) != EOF){
        if (current_char == '\n') {
            newlines++;
        }
    }
    printf("%ld\n", newlines);
}
