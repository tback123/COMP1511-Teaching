// A program written to demonstrate basic user IO in C
// Written by Tom's COMP1511 Tutorial

#include <stdio.h>

int main(void) {

    int my_age = 21;
    int my_phone_number = 000;

    // Output to screen?
    printf("Tom's age is: %d & phone number is %03d\n", my_age, my_phone_number);
    
    // Place holders
    // %d - used for int
    // %lf - used for doubles
    
    int my_input = 0;
    scanf("%d", &my_input);
    
    printf("Please end a number: ");
    
    
    
    printf("%d", my_input);

    return 0;
}
