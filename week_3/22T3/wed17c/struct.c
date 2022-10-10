// structs.c
// A program written by Tom's class

#include <stdio.h>

// struct person template
struct person {
    int shoe_size;
    double height;
    char first_name_initial;
};

int main(void) {

    struct person tom;
    tom.shoe_size = 11;
    tom.height = 186.2;
    tom.first_name_initial = 't';

    struct person jessica;
    jessica.shoe_size = 10;
    jessica.height = 190.1;
    jessica.first_name_initial = 'j';

    printf("Tom's height: %lf\n", tom.height);
    printf("Jessica's height: %lf\n", jessica.height);

    return 0;
}