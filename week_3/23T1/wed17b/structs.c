// A program to show the use case of a struct
// Written by Tom's COMP1511 Tutorial

#include <stdio.h>

// TODO: Define a struct
struct person {
    int age;
    double height;
    char initial;
};

int main(void) {

    // TODO: Init a strucut
    struct person   tom;
    struct person   sasha;

    tom.age = 23;
    tom.height = 185.1;
    tom.initial = 't';

    sasha.initial = 's';

    // TODO: Print the info from the struct
    printf("The height is: %d\n", tom.age);


    return 0;
}