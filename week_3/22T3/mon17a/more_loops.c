// more_loops.c
// A program written by Tom's class

#include <stdio.h>

#define NUM_ROWS 6
#define NUM_COLS 4

int main(void) {

    int row = 0;
    while (row < NUM_ROWS) {

        int col = 0;
        while (col < NUM_COLS) {
            printf(" X ");
            col++;
        }
        printf("\n");

        row++;
    }

    return 0;
}