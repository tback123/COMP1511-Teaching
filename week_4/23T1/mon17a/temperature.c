#include <stdio.h>

#define NUM_DAYS 7

int main(void) {

    // Declare and initialise array
    int temps[NUM_DAYS] = {0};

    // Read in values
    for (int counter = 0; counter < NUM_DAYS; counter++) {
        scanf("%d", &temps[counter]);
    }

    // Find max values
    int max = temps[0];
    for (int counter = 0; counter < NUM_DAYS; counter++) {
        if (temps[counter] > max) {
            max = temps[counter];
        }
    }

    // Print max temp
    printf("Max temp is: %d\n", max);

    return 0;
}