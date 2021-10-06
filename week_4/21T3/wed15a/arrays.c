// An example program using arrays
// Written by Tom's 1511 Tutorial

#include <stdio.h>

#define SIZE 4

int main(void) {

    // Create an array here!
    int my_array[SIZE] = {0};

    // Setting everything in the array = 1
    int counter = 0;
    while (counter < SIZE) {
        my_array[counter] = 1;
        counter++;
    }

    // Access array
    my_array[2] = 15;

    // Print the array
    counter = 0;
    while (counter < SIZE) {
        printf("Index: %d - Value: %d\n", counter, my_array[counter]);
        counter++;
    }
    

    return 0;
}