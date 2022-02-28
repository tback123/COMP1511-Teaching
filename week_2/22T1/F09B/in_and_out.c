// A program written to demonstrate basic user IO in C
// Written by Tom's COMP1511 Tutorial

#include <stdio.h>

int main(void) {

    // Setup age
    int my_age = 21;
    double my_height = 185.299;
    printf("My age: %d & my height: %.1lf\n", my_age, my_height); 
    
    // asking for a new age
    printf("Please enter your new age: ");
    scanf("%d", &my_age);
    
    // Displaying the new age
    printf("New age: %d\n", my_age);

    return 0;
}
