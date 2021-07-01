// COMP1511 Week 5 Tutoirial
// Write a void function which places the sum of 
// two numbers inside a variable passed in by reference.

#include <stdio.h>

void sum_prod(int input1, int input2, int *sum_result, int *prod_result);

int main(void) {

    // Initial numbers
    int num1 = 10;
    int num2 = 5;

    // Results
    int sum = 0;
    int product = 0;

    // Get sum & product
    sum_prod(num1, num2, &sum, &product);

    // Display results
    printf("Sum was: %d\n", sum);
    printf("Prod was: %d\n", product);

    return 0;
}

// Given 2 numbers, put the sum & product in respective variables
void sum_prod(int input1, int input2, int *sum_result, int *prod_result) {

    *sum_result = input1 + input2;

    *prod_result = input1 * input2;

}
