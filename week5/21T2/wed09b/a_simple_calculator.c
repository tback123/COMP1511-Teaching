// A simple calculator application to (W09B)
// read in 2 numbers and display the sum

#include <stdio.h>

int my_addition(int num1, int num2);

int main(void) {

    int input1, input2;

    // Read in 2 numbers
    printf("Enter a number: ");
    scanf("%d", &input1);
    printf("Enter a number: ");
    scanf("%d", &input2);

    // Evaluate and display the sum
    printf("Result was: %d\n", my_addition(input1, input2));

    return 0;
}

// Read in 2 numbers and return the sum
int my_addition(int num1, int num2) {
    return num1 + num2;
}