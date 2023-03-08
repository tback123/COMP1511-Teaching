// An example program using arrays
// Written by Tom's 1511 Tutorial

#include <stdio.h>

int main(void) {

    // Create arrays
    double arr1[3] = {12.1, 13.2, 14.3};
    double arr2[10] = {0.0};

    // Copy
    for (int i = 0; i < 3; i++) {
        arr2[i] = arr1[i];
    }

    // Print
    for (int counter = 0; counter < 10; counter++) {
        printf("Index %d: %lf\n", counter, arr2[counter]);
    }


    return 0;
}