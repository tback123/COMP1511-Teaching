// A program written to demonstrate basic user IO in C
// Written by Tom's COMP1511 Tutorial

#include <stdio.h>

#define STARTING_AGE 21
#define STARTING_HEIGHT 185.2

int main(void) {

    int my_age = STARTING_AGE;
    double my_height = STARTING_HEIGHT;
    printf("Age: %d & Height: %lf\n", my_age, my_height);

    printf("Enter the new age & height:");
    scanf("%d %lf", &my_age, &my_height);
    
    printf("Age: %d & Height: %lf\n", my_age, my_height);


    return 0;
}
