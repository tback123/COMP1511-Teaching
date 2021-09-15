// Write a program to read in a series of letters
// and numbers and count the number of digits and add them all up

#include <stdio.h>

int main(void) {

    int num_digits = 0;
    int digit_total = 0;

    int curr_char = getchar();
    while (curr_char != EOF) {

        // Print out the current charter we are looking at:
        printf("Looking at: ");
        putchar(curr_char);
        printf("\n");

        // Checking if we have a digit
        if (curr_char >= '0' && curr_char <= '9') {
            // Increase the number of digits we've seen
            num_digits++;

            // Get the respective value, add to the total
            int digit_value = curr_char - '0';
            digit_total += digit_value;

        }

        // Last thing we do in our look
        // Read the NEXT character
        curr_char = getchar();
    }

    printf("There were %d of digits, totaling %d\n", num_digits, digit_total);

    return 0;
}