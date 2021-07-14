// Example chars program

#include <stdio.h>

int main(void) {

    printf("Please enter a number: ");

    // getchar reads a single letter from 'stdin' and retuns the ascii value
    // OR returns EOF on ctrl+d
    int my_char = getchar();

    printf("The char was (ascii value): %d\n", my_char);
    printf("The char was (as a char): %c\n", my_char);

    // Get the actual numerical value (only works for numerical chars)

    // int result_num = my_char - '0';
    // printf("The result num was: %d\n", result_num);


    return 0;
}