// An example of using functions to calculate triangle number
// Written by Tom's comp1511 tutorial

#include <stdio.h>

int main() {

    // Calculate Value
    int triangle_num = 15;
    int total = 0;
    while (triangle_num >= 1) {
        total += triangle_num;
        triangle_num--;
    }

    // Print value
    printf("Total: %d\n", total);

    return 0;
}