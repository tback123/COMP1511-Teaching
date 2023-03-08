// An example program using arrays
// Written by Tom's 1511 Tutorial

#include <stdio.h>

int main(void) {

    // TODO: Create an array here!
    int my_arr[5] = {3, 5, 6, 2, 8};

    /*
    // Scan in index
    int index = 0;
    scanf("%d", &index);
    
    // Scan in value
    int value = 0;
    scanf("%d", &my_arr[index];)
    */

    for (int counter = 0; counter < 5; counter++) {
        printf("Index %d: %d\n", counter, my_arr[counter]);
    }
    
    return 0;
}