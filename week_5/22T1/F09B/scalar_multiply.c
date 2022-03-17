// COMP1511 Week 5 tut question
// Write a function that takes in a 2D array of ints and 
// multiplies every value in the array by a given int.

#include <stdio.h>

#define ROWS 5
#define COLS 3

#define SCALE_FACTOR 10;

// Given sizes, print a matrix
void print_matrix(int rows, int columns, int matrix[rows][columns]);

void scalar_multiply(int rows, int columns, int matrix[rows][columns], int scalar);


int main(void) {

    // Define the grid
    int grid[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}, {13, 14, 15}};

    // Before change
    print_matrix(ROWS, COLS, grid);

    // Scalar_multiply
    printf("Doing scalar multiplication...\n");

    // TODO, multiply each element by SCALE_FACTOR

    // After change
    print_matrix(ROWS, COLS, grid);


    return 0;
}

// Given sizes, print a matrix
void print_matrix(int rows, int columns, int matrix[rows][columns]) {

    // Loop through rows
    int curr_row = 0;
    while (curr_row < rows) {

        // Loop through cols
        int curr_col = 0;
        while (curr_col < columns) {
            
            printf("%d   ", matrix[curr_row][curr_col]);

            curr_col++;
        }
        printf("\n");
        curr_row++;
    }
    
}