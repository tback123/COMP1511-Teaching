// A program to show the use case of a loop
// Written by Tom's COMP1511 Tutorial

#include <stdio.h>

int main(void) {

    // Read in a number
    int max_num = 0;
    printf("Please enter an integer: ");
    scanf("%d", &max_num);
    
    // Init
    int counter = 0;
    
    // condition
    while (counter < max_num) {

        // Main loop code
        int second_counter = 0;
        
        while (second_counter < max_num) {
            
            printf("*");
            second_counter++;
            
        }
        
       
        printf("\n");
        
        // Update condition
        counter++;
    }

    return 0;
}
