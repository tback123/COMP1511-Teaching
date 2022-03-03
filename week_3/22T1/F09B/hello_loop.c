// A program to show the use case of a loop
// Written by Tom's COMP1511 Tutorial

#include <stdio.h>

int main(void) {

    // TODO: write print this out 10 times

    int counter = 0;

    while ( counter < 10 ) {
        printf("%d: Hello World!\n", counter);
        counter++;
    }


    printf("Thank you!\n");

    return 0;
}
