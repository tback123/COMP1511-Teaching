// A program to show the use case of a loop
// Written by Tom's COMP1511 Tutorial

#include <stdio.h>

int main(void) {

    int count = 0;
    while (count < 10) {
        printf("%d: Hello!\n", count);
        
        count++;
    }


    return 0;
}