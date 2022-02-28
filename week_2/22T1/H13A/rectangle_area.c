// A program written to read in 2 lengths and find area
// Written by Tom's COMP1511 Tutorial

#include <stdio.h>

int main(void) {

    // Read in first number
    double length = 0.0;
    printf("Please enter the length: ");
    scanf("%lf", &length);

    // Read in second number
    double width = 0.0;
    printf("Please enter the width: ");
    scanf("%lf", &width);

    // Find area
    double area = 0.0;
    area = length * width;

    // Print area to user
    printf("The area is: %.2lf\n", area);

    return 0;
}
