// Base loop program to use a while loop
// and print "hello" 10 times
// Written by: Tom Killingback March 2021

#include <stdio.h>

int main(void) {

    // 1. Variable initialisation
    int counter = 0;

    // 2. Condition
    while (counter < 10) {

        printf("Hello World\n");
        
        // 3. Incrementation
        counter++;
    }    

    return 0;
}
