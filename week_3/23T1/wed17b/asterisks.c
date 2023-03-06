// A program to show the use case of a loop
// Written by Tom's COMP1511 Tutorial

#include <stdio.h>

#define NUM_STAR 10

int main(void) {

    int row = 0;
    while (row < 4) {

        // Print a row
        int col = 0;
        while (col < 4) {

            if (row == col) {
                printf("X");
            } else {
                printf("*");
            }

            col++;
        }
        printf("\n");

        row++;
    }
    
    return 0;
}