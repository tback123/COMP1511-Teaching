// A program written to check if a number is divisible by 2
// Written by Tom's COMP1511 Tutorial

#include <stdio.h>

int main(void) {

    int num = 0;

    // Read in number
    printf("Please enter a number\n");
    scanf("%d", &num);

    // Check if number is even?
    //      -> check if divisible by 2
    //      -> no remainder when dividied by 2
    
    // = setter
    // == checker
    
    // Logical Operators
    // a == b
    // a > b
    // a >= b
    // a < b
    // a <= b
    
    // True is anything not 0
    // False is 0

    if (num % 2 == 0) {
        // Do this is true
        printf("Even!\n");
    } else {
        // Do this if false
        printf("Odd!\n");
    }
    

    // Print thank you
    printf("Thank you!\n");

    return 0;
}
