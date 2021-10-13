#include <stdio.h>

#define ROWS 4
#define COLS 3

int main(void) {


    //         rows  cols
    //         outer inner
    int my_arr[ROWS][COLS] = {{0}};

    int row = 0;
   
    while (row < ROWS) {

        int col = 0;
        while(col < COLS) {
            my_arr[row][col] = 1
            col++
        }

        row++;
    }


    return 0;
}