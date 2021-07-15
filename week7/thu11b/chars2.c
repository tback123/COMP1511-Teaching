// Example chars program

#include <stdio.h>
// EOF == -1

int main(void) {

    int my_char = getchar();

    printf("My char is (number): %d\n", my_char);
    printf("My char is (char): %c\n", my_char);

    // Checking if we have a digit
    if (my_char >= '0' && my_char <= '0') {
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