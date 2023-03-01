// A program to show the use case of a loop
// Written by Tom's COMP1511 Tutorial

#include <stdio.h>

#define SIZE 5

int main(void) {


    // Do something 10 times
    int row = 0;
    while (row < SIZE) {
        
        // Prints a row
        int col = 0;
        while (col < SIZE) {
            
            if (row == (SIZE-1)) {
                printf("X");
            } else {
                printf("*");
            }

            col = col + 1;
        }
        printf("\n");


        row++;
    }
    


    return 0;
}
