// Read in numbers from a user and put into an array

#include <stdio.h>

#define SIZE 2

int main(void) {
    // Create the 2d array
    int array[SIZE][SIZE] = {{0}};

    // Loop through all elements of the array and read in the number
    int row = 0;
    while (row < SIZE) {
        
        // For each row, loop through the columns
        int cols = 0;
        while (cols < SIZE) {
            
            // Read in a number for every grid position
            printf("Please enter a number: ");
            scanf("%d", &array[row][cols]);

            cols++;
        }

        row++;
    }


    // Print out the array
    // Counter through the rows
    row = 0;
    while (row < SIZE) {
        
        // For each row, loop through the columns
        int cols = 0;
        while (cols < SIZE) {
            
            // Print out info for every grid position
            printf("(%d, %d, val: %d)   ", row, cols, array[row][cols]);

            cols++;
        }
        printf("\n");

        row++;
    }

    return 0;
}