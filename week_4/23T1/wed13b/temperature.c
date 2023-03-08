#include <stdio.h>

#define NUM_DAYS 7

int main(void) {

    // Declare and initialise array
    int temps[NUM_DAYS] = {0};

    // Read in values
    for (int i = 0; i < NUM_DAYS; i++) {
        scanf("%d", &temps[i]);
    }
    
    // Print
    for (int counter = 0; counter < NUM_DAYS; counter++) {
        printf("Index %d: %d\n", counter, temps[counter]);
    }

    // Find max values

    // Print max temp
    // printf("Max temp is: %d\n", {});

    return 0;
}