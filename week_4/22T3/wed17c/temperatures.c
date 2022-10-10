// temperatures
// Written by Tom's Tut
// A program to read in temperatures, and average them

#include <stdio.h>

#define NUM_TEMPS 7

int main(void) {

    // Create an array
    //             vvv init everything to 0
    int temps[7] = {0};

    // Read in 7 temps
    for (int i = 0; i < NUM_TEMPS; i++) {
        scanf("%d", &temps[i]);
    }

    // Calculate the average
    double sum = 0;
    for (int i = 0; i < NUM_TEMPS; i++) {
        sum = sum + temps[i];
    }
    double average = sum / NUM_TEMPS;

    // Print average
    printf("Avg: %lf\n", average);

    return 0;
}