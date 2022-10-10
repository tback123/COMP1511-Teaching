// more_loops.c
// A program written by Tom's class

#include <stdio.h>

#define NUM_ROWS 3
#define MAX_ZEROS 5

int main(void) {

    int row = 0;
    while (row < NUM_ROWS) {

        int col = 0;
        while (col < MAX_ZEROS) {
            printf("0");
            col++;
        }

        printf("\n");

        row++;
    }


    return 0;
}