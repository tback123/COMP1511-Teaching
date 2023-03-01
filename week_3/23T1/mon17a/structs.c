// A program to show the use case of a struct
// Written by Tom's COMP1511 Tutorial

#include <stdio.h>

struct person {
    int age;
    double height;
    char initial;
};

struct person increase_age(struct person my_person) {
    my_person.age += 1;
    return my_person;
}

int main(void) {

    // Init variable
    struct person tom;

    tom.age = 22;
    tom.height = 183.5;
    tom.initial = 't';

    // TODO: Print the info from the struct
    printf("The age is: %d\n", tom.age);

    tom = increase_age(tom);

    printf("The age is: %d\n", tom.age);


    return 0;
}