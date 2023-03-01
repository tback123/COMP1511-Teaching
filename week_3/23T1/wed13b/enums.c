// A program to show the use case of a struct
// Written by Tom's COMP1511 Tutorial

#include <stdio.h>

enum days {
    MON,
    TUE,
    WED,
    THU,
    FRI
};

int main(void) {

    enum days day_of_the_week = 100;

    // TODO: Print the info from the struct
    printf("The Mon is: %d\n", day_of_the_week);


    return 0;
}