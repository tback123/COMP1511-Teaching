// Write a program to read in a series of letters
// and numbers and count the number of digits and add them all up

#include <stdio.h>

int main(void) {

    int curr_char;
    int digit_count, digit_sum;

    digit_count = 0;
    digit_sum = 0;

    curr_char = getchar();
    while (curr_char != EOF) {

        // Example of using putchar
        printf("Currently looking at: ");
        putchar(curr_char);
        printf("\n");

        // Do your code here
        if (curr_char >= '0' && curr_char <= '9') {
            
            // Know we have a digit, therefore increase the total
            digit_count++;

            // Find actual represented number
            int represented_num = curr_char - '0';
            digit_sum += represented_num;

        }

        curr_char = getchar();
    }

    printf("Input contained %d of digits which summed to %d\n", digit_count, digit_sum);

    return 0;
}