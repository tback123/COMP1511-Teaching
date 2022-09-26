// structs.c
// A program written by Tom's class

#include <stdio.h>

struct person {
    int shoe_size;
    double height;
    char first_name_initial;
};

int main(void) {

    // int toms_height = 186;

    struct person tom;
    tom.shoe_size = 11;
    tom.height = 186.2;
    tom.first_name_initial = 't';

    struct person jessica;
    jessica.shoe_size = 12;
    jessica.height = 168.6;
    jessica.first_name_initial = 'j';

    printf("Initial: %c\n", tom.first_name_initial);

    return 0;
}