// Starter code from COMP1511 Week5 tutorial
// Change to make a 7x7 array of 1's then print it out

#include <stdio.h>

#define SIZE 7

void print_array(int size, int matrix[SIZE][SIZE]);

int main(void) {

    int grid[SIZE][SIZE] = {{0}};

    // Set all values in the grid
    int row = 0;
    while (row < SIZE) {

        int col = 0;
        while (col < SIZE) {
            grid[row][col] = 25;
            col++;
        }
        row++;
    }
    
    printf("initial state:\n");
    print_array(SIZE, grid);

    printf("changing state...\n");
    grid[5][1] = 99;

    printf("changed state:\n");
    print_array(SIZE, grid);

    return 0;
}

// given a size x size matrix, print it out
void print_array(int size, int matrix[SIZE][SIZE]) {

    // print values in the grid
    int row = 0;
    while (row < size) {

        int col = 0;
        while (col < size) {
            printf("%d ", matrix[row][col]);
            col++;
        }

        printf("\n");

        row++;
    }
}