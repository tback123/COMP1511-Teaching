// A program written to check if a number is divisible by 2
// Written by Tom's COMP1511 Tutorial

#include <stdio.h>

int main(void) {

    int num = 0;

    // Read in number
    printf("Please enter a number\n");
    scanf("%d", &num);   

    int condition = (num % 2 == 0) && (num == 4)

    // Check if divisible by 2
    if (condition) {
        printf("YES!\n");
    } else {
        printf("NO!\n");
    }

    // Print thank you
    printf("Thank you!\n");

    return 0;
}
