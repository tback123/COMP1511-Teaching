// A program to show the use case of a struct
// Written by Tom's COMP1511 Tutorial

#include <stdio.h>

// TODO: Define a struct
struct student {
    double wam;
    int age;
    char initial;
};

int main(void) {

    // TODO: Declare a strucut
    struct student tom;
    tom.wam = 50.1;
    tom.age = 21;
    tom.initial = 'T';
    
    struct student ben;
    ben.wam = 99.95;
    ben.age = 12;
    ben.initial = 'B';

    // TODO: Print the info from the 
    printf("Wam: %lf\n", tom.wam);
    printf("Age: %d\n", tom.age);
    printf("Initial: %c\n", tom.initial);
    
    tom.age = 59;
    printf("New Age: %d\n", tom.age);    
    


    return 0;
}
