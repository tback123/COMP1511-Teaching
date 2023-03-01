// A program to show the use case of a loop
// Written by Tom's COMP1511 Tutorial

#include <stdio.h>

int main(void) {

    int count = 1;
    while (count <= 100) {
        printf("%d: Hello!\n", count);
        count = count + 1;
    }

    return 0;
}