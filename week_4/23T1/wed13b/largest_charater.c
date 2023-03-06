// An example program using arrays
// Written by Tom's 1511 Tutorial

#include <stdio.h>

int main(void) {

    // Create arrays
    char arr[8] = {'a', 'd', 'B', 'z', 'Z', 'f', 'd', '!'};

    // find largest
    char largest = arr[0];
    for (int i = 0; i < 8; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    // print
    printf("Largest: %c\n", largest);

    return 0;
}