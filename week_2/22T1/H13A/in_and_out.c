// A program written to demonstrate basic user IO in C
// Written by Tom's COMP1511 Tutorial

#include <stdio.h>

int main(void) {
    
    // Setup initial age
    int my_age = 21;
    printf("My age: %d\n", my_age);
    
    double my_height = 0.0;
    
    // Ask the user for their new age
    printf("Please enter you new age: \n");
    scanf("%d %lf", &my_age, &my_height);
    
    
    // Print out the new age
    printf("My new age: %d\n", my_age);
    printf("My height: %lf\n", my_height);

    return 0;
}
