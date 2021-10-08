// An example program using arrays
// Written by Tom's 1511 Tutorial

#include <stdio.h>

#define SIZE 10

void change_array(int the_array_to_change[SIZE]);

int main(void) {

    // TODO: Create an array here!
    int my_array[SIZE] = {0};

    // TODO: Print the array
    change_array(my_array);

    int counter = 0;
    while (counter < SIZE) {
        printf("%d - %d\n", counter, my_array[counter]);
        counter++;
    }

    return 0;
}

void change_array(int the_array_to_change[SIZE]) {
    the_array_to_change[2] = 50;
    the_array_to_change[4] = 50;
}