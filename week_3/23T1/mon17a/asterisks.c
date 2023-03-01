// A program to show the use case of a loop
// Written by Tom's COMP1511 Tutorial

#include <stdio.h>

#define NUM_STARS 10
#define NUM_ROWS 10

int main(void) {

    int num_rows = 0;
    printf("Enter rows: ");
    scanf("%d", &num_rows);

    int num_cols = 0;
    printf("Enter cols: ");
    scanf("%d", &num_cols);

    int row = 0;
    while (row < num_rows) {

        // Print row
        int cols = 0;
        while (cols < num_cols) {
            printf("*");
            cols++;
        }
        printf("\n");

        row++;
    }

    return 0;
}