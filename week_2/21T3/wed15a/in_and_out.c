// A program written to demonstrate basic user IO in C
// Written by Tom's COMP1511 Tutorial

#include <stdio.h>

int main(void) {

    int my_num = 10;
    int my_other_num = 15;
    
    // Display to screen
    // %d = decimal number (whole number)
    printf("My number is: %d and %d\n", my_num, my_other_num);
    
    // Read a number
    scanf("%d", &my_num);
    
    // Print the number again
    printf("My number is: %d and %d\n", my_num, my_other_num);

    return 0;
}
