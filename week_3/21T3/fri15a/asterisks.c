// A program to show the use case of a loop
// Written by Tom's COMP1511 Tutorial

#include <stdio.h>

int main(void) {

    // Read in a number
    int input = 0;
    printf("Please enter an integer: ");
    scanf("%d", &input);
    
    // Init
    int counter = 0;
    while (counter < input) {
            
        int second_counter = 0;
        while (second_counter < input) {
            printf("*");
            second_counter++;
        }
        
        printf("\n");

        
        // Update condition
        counter++;
    }

    return 0;
}
