#include <stdio.h>
 
#define SIZE 5
 
void print_square(int square[SIZE][SIZE]);
int is_magic(int square[SIZE][SIZE]);
 
int main(void) {
    int sq[SIZE][SIZE] = { { 59, 107, 71, 23, 53 },
                           { 13, 37, 113, 61, 89 },
                           { 43, 41, 83, 79, 67 },
                           { 101, 19, 17, 103, 73 },
                           { 97, 101, 29, 47, 31 } };
 
    print_square(sq);
 
    if (is_magic(sq)) {
        printf("A magic square :-)\n");
    } else {
        printf("Not a magic square :-(\n");
    }
 
    return 0;
}
 
// return 1 if square is a a magic square
// return 0 otherwise
// a square is magiv rows, columns & diagonals all sum
// the same value
int is_magic(int square[SIZE][SIZE]) {
    return 0;
}
 
// print
void print_square(int square[SIZE][SIZE]) {
    int row = 0;
    while (row < SIZE) {
        int column = 0;
        while (column < SIZE) {
            printf("%3d ", square[row][column]);
            column = column + 1;
        }
        printf("\n");
        row = row + 1;
    }
}
