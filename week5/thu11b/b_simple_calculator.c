// A simple calculator application to
// read in 2 numbers and display the sum

#include <stdio.h>

int my_addition(int num1, int num2);

int main(void) {

    int first_number, second_number;

    // Reading in 2 numbers from user
    printf("Enter a number: ");
    scanf("%d", &first_number);
    printf("Enter a number: ");
    scanf("%d", &second_number);

    // Finding the sum
    int sum = my_addition(first_number, second_number); 
    printf("Result was: %d\n", sum);

    // Ending program
    return 0;
}

// Given two integers, return the sum.
int my_addition(int num1, int num2) {
    int a_number = num1 + num2; 
    return a_number;
}