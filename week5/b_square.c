#include <stdio.h>

#define SIZE 7

void print_matrix(int num_rows, int num_cols, int matrix[SIZE][SIZE]);

int main(void) {

    // Greate the grid
    int grid[SIZE][SIZE] = {{0}};

    // Set all position to 1
    int row, column;
    row = 0;
    while (row < SIZE) {
        column = 0;
        while (column < SIZE) {
            
            grid[row][column] = 1;

            column++;
        }
        row++;
    }

    // Display Grid
    print_matrix(SIZE, SIZE, grid);

    // Change grid
    printf("Changeing 5,1\n");
    grid[5][1] = 0;

    // Display grid again
    print_matrix(SIZE, SIZE, grid);

    return 0;
}

void print_matrix(int num_rows, int num_cols, int matrix[SIZE][SIZE]) {

    int row, column;

    row = 0;
    while (row < num_rows) {
        column = 0;
        while (column < num_cols) {
            
            printf("%d ", matrix[row][column]);

            column++;
        }
        printf("\n");
        row++;
    }


}