// Base loop program to use a while loop
// and print "hello" 10 times
// Written by: Tom Killingback March 2021

#include <stdio.h>

int main(void) {

    // 1. Initialise counter variable
    int counter = 0;

    // 3. Accurate condition
    while (counter < 10) {

        printf("Hello World! - %d\n", counter);

        // 2. Increment the counter
       counter++; 
    }

    return 0;
}
