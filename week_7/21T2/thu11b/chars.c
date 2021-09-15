// Example chars program

#include <stdio.h>

int main(void) {

    int my_num = 21; // int 4 bytes, 32 bits: 0-> 2,147,483,648

    char my_char = 'a'; // char 1 byte, 8 bits: 255 individual variable

    printf("My Num is: %d\n", my_num);
    printf("My char is: %c\n", my_char);

    // Checking if we have a digit
    if (my_char >= '0' && my_char <= '9') {
        printf("My char is representing a number\n");
    }

    // Check if we have a lower-case char
    if (my_char >= 'a' && my_char <= 'z') {
        printf("My char is representing a lowercase letter\n");
    }

    // Check if we have a upper-case char
    if (my_char >= 'A' && my_char <= 'Z') {
        printf("My char is representing a uppercase letter\n");
    }

    return 0;
}