#include<stdio.h>
#include<stdbool.h> // daamn, no bools?

int main(){
    bool last_char_was_space = false;
    int current_char;
    while ((current_char = getchar()) != EOF) {
        bool should_print = current_char != ' ' 
            || (current_char == ' ' && !last_char_was_space);
        if (should_print) {
            putchar(current_char);
        }
        last_char_was_space = current_char == ' ';
    }
}
