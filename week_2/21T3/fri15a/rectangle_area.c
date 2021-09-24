// A program written to read in 2 lengths and find area
// Written by Tom's COMP1511 Tutorial

#include <stdio.h>

int main(void) {

    int side1 = 0;
    int side2 = 0;

    // Read in first number
    printf("Enter side length 1: ");
    scanf("%d", &side1);

    // Read in second number
    printf("Enter side length 2: ");
    scanf("%d", &side2);

    // Find area
    int area = 0;
    area = side1 * side2;

    // Print area to user
    printf("Area was: %d\n", area);

    return 0;
}
