// A program to show the use case of a struct
// Written by Tom's COMP1511 Tutorial

#include <stdio.h>

enum day {
    MON,
    TUES,
    WED,
    THU,
    FRI,
    SAT,
    SUN
};

int main(void) {

    // Init variable
    enum day my_day = SAT;

    printf("Day value: %d\n", my_day);

    return 0;
}