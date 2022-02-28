// A program written to read in 2 lengths and find area
// Written by Tom's COMP1511 Tutorial

#include <stdio.h>

int main(void) {

    // Read in first number
    double length = 0;   
    printf("Please input the length ");
    scanf("%lf", &length);
    printf("You entered: %lf\n", length);

    // Read in second number
    double height = 0;   
    printf("Please input the height ");
    scanf("%lf", &height);
    printf("You entered: %lf\n", height);

    // Find area
    double area = height * length;

    // Print area to user
    printf("Area is: %.3lf\n", area);

    return 0;
}
