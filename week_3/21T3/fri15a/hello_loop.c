// A program to show the use case of a loop
// Written by Tom's COMP1511 Tutorial

#include <stdio.h>

int main(void) {

    // init
    int counter = 0;
    
    // Condition
    while (counter < 10) {
    
        // Main code
        printf("Hello World!\n");
        
        // Update the condition 
        counter = counter + 1;
    }
        

    return 0;
}
