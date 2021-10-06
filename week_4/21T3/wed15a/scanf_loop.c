// An example program for using scanf in a loop
// Written by Tom's 1511 Tutorial

#include <stdio.h>

int main(void) {
    
    // Create a variable to read into
    int num = -1;

    // Loop while scanf reads in the correct number of things
    // Change the == 1 to another number if you need to read in more than one thing
    while (scanf("%d") == 1) {
        // Do some code
        printf("The number1 was: %d\n", num1);
    }
    
    // Code goes here when CTRL+D is pressed
    printf("The end!\n");

    return 0;
}