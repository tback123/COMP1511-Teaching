// An example program using arrays
// Written by Tom's 1511 Tutorial

#include <stdio.h>

#define SIZE 5

int main(void) {

    // TODO: Create an array here!
    int my_array[SIZE];

    my_array[0] = 8;
    my_array[1] = 5;
    my_array[2] = 9;
    my_array[3] = 100;
    my_array[4] = -10;

    // Print the array
    int counter = 0;
    while (counter < SIZE) {
        printf("%d: %d\n", counter, my_array[counter]);
        counter++;
    }

    // Modify the array
    counter = 0;
    while (counter < SIZE) {
        if (counter % 2 == 0) {
            my_array[counter] = 0;
        }
        counter++;
    }
    printf("### Changed array! ###\n");

    // Print the array
    counter = 0;
    while (counter < SIZE) {
        printf("%d: %d\n", counter, my_array[counter]);
        counter++;
    }

    return 0;
}