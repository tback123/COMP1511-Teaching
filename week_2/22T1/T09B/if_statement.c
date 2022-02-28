// A program written to check if a number is divisible by 2
// Written by Tom's COMP1511 Tutorial

#include <stdio.h>

int main(void) {

    // Read in number
    int input = 0;
    printf("Please enter a number\n");
    scanf("%d", &input);

    // Check if divisible by 2
    // Display if the number was divible by 2
    if ( input % 2 == 0 ) {
        // Do this if condition was true
        printf("Yes!\n");
        printf("Really yes!\n");
    } else {
        printf("No!\n");
    }

    // Print thank you
    printf("Thank you!\n");

    return 0;
}
