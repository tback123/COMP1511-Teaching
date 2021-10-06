// A program to show the use case of a loop
// Written by Tom's COMP1511 Tutorial

#include <stdio.h>

int main(void) {

    // Read in a number
    int input = 0;
    printf("Please enter a number: ");
    scanf("%d", &input);
    
    // Init
    int counter = 0;
    while (counter < input) {
        
        if (counter % 7 == 0) {
            printf("Counter: %d\n", counter);
        }
        
        // Update condition
        counter++;
    }

    return 0;
}
