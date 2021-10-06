// A program to show the use case of a loop
// Written by Tom's COMP1511 Tutorial

#include <stdio.h>

int main(void) {

    // Read in a number
    int max_num = 0;
    printf("Please enter an integer: ");
    scanf("%d", &max_num);
    
    // Init
    int row = 0;
    
    // condition
    while (row < max_num) {

        // Main loop code
        int col = 0;
        
        while (col < max_num) {         
            //printf("(%d, %d)", row, col);
            //printf("*");
            
            if (row == col) {
                printf("*");
            } else {
                printf("-");
            }

            col++;  
        }
        
        printf("\n");
        
        // Update condition
        row++;
    }

    return 0;
}
