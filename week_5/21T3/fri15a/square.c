#include <stdio.h>

#define SIZE 4

int main(void) {

    int my_arr[SIZE][SIZE] = {{0}};

    int row = 0;
    int col = 0;
    while (row < SIZE) {

        while (col < SIZE) {

            my_arr[row][col] = 1;
            col++;
        }

        row++;

    }

    printf("Row 2, Col 3 = %d\n", my_arr[2][3]);

    return 0;
}