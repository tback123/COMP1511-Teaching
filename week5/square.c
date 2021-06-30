#include <stdio.h>

#define SIZE 7

int main(void) {
    int row, column;

    row = 0;
    while (row < SIZE) {
        column = 0;
        while (column < SIZE) {
            printf("1");
            column = column + 1;
        }
        printf("\n");
        row = row + 1;
    }

    return 0;
}