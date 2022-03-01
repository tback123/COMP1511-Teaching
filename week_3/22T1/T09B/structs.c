// A program to show the use case of a struct
// Written by Tom's COMP1511 Tutorial

#include <stdio.h>

// TODO: Define a struct
struct student {
    int zid;
    double wam;
    char initial;
};

int main(void) {

    // TODO: Build a strucut
    struct student tom;
    tom.wam = 50.1;
    tom.zid = 1234567;
    tom.initial = 'T';
    
    struct student ben;
    ben.zid = 7654321;

    // TODO: Print the info from the struct
    printf("zid: %d\n", tom.zid);
    printf("wam: %lf\n", tom.wam);
    printf("initial: %c\n", tom.initial);

    return 0;
}
