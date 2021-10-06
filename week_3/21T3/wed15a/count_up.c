// A program to show the use case of a loop
// Written by Tom's COMP1511 Tutorial

#include <stdio.h>

int main(void) {

    // Read in a number
    int max_num = 0;
    printf("Please enter a number: ");
    scanf("%d", &max_num);
    
    // Init
    int counter = 0;
    
    // TODO: Choose condition
    while (counter < max_num) {

        // Main loop code
        if (counter % 7 == 0) {
            printf("%d\n", counter);
        }
        
        // Update condition
        counter++;
    }

    return 0;
}
