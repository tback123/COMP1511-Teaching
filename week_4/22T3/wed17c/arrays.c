// arrays.c
// Written by Tom's Tut

#include <stdio.h>

#define ARR_SIZE 6

void odd_only();
void copy_array();
void largest_char();

int main(void) {

    // Creating array
    int my_arr[ARR_SIZE];
    my_arr[0] = 4;
    my_arr[1] = -2;
    my_arr[2] = 6;
    my_arr[3] = 6;
    my_arr[4] = 8;
    my_arr[5] = -9;

    // Print out all elements
    int counter = 0;
    while (counter < ARR_SIZE) {
        printf("%d\n", my_arr[counter]);
        counter++;
    }

    return 0;
}

