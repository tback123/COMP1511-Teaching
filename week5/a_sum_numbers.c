// COMP1511 Week 5 Tutoirial
// Write a void function which places the sum of 
// two numbers inside a variable passed in by reference.
#include <stdio.h>

void sum_product_nums(int a, int b, int *sum, int *product);

int main(void) {

    int number1 = 10;
    int number2 = 15;

    int sum_result = 0;
    int *result_pointer = &sum_result;

    int product_result = 0;

    sum_product_nums(number1, number2, result_pointer, &product_result);

    printf("The sum result was: %d\n", sum_result);
    printf("The product result was: %d\n", product_result);

    return 0;
}

// Given two integers, put the sum & product in the respective variable
void sum_product_nums(int a, int b, int *sum, int *product) {

    *(sum) = a + b;

    *(product) = a*b;

}