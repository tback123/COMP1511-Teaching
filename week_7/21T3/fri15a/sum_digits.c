// Write a program to read in a series of letters
// and numbers and count the number of digits

#include <stdio.h>

int main(void) {

    // "My age is 21 and I have $12" ==> 4
    int total_digits = 0;

    // Read in the first character
    int ch = getchar();
    while (ch != EOF) {

        // Check if ch is a digit
        if (ch >= '0' && ch <= '9') {
            // Is a digit!
            total_digits += 1;
        }

        // Read in another character
        ch = getchar();
    }

    printf("I saw %d of digits!\n", total_digits);

    return 0;
}