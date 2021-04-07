// Starter code from COMP1511 Week5 tutorial
// Change to make a 7x7 array of 1's then print it out


#include <stdio.h>

#define SIZE 7

int main(void) {
    int row, column;

    int grid[SIZE][SIZE] = {0};

    row = 0;
    while (row < SIZE) {
        column = 0;
        while (column < SIZE) {
            grid[row][column] = 1;
            column = column + 1;
        }
        printf("\n");
        row = row + 1;
    }

    row = 0;
    column = 0;
    while (row < SIZE) {
        column = 0;
        while (column < SIZE) {
            printf("%d", grid[row][column]);
            column = column + 1;
        }
        printf("\n");
        row = row + 1;
    }


    return 0;
}