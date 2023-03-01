// A program to show the use case of a loop
// Written by Tom's COMP1511 Tutorial

#include <stdio.h>

#define SIZE 4

int main(void) {

    int row = 0;
    while (row < SIZE) {

        // Print row
        int cols = 0;
        while (cols < SIZE) {
            printf("(%d, %d) ", row, cols);
            cols++;
        }
        printf("\n");

        row++;
    }

    return 0;
}