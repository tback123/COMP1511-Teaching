#include <stdio.h>

int my_addition(int input1, int input2);

// If number is even - return 1
// if number is odd - return 0
int is_even_or_odd(int number);

int multiply_by_two(int number);

int main(void) {

    int a = 11;
    int b = 5;

    int sum = my_addition(a, b);

    printf("Sum is: %d\n", sum);

    int is_even = is_even_or_odd(sum);
    printf("is_even has the value: %d\n", is_even);

    int my_number = 2;
    my_number = multiply_by_two(my_number);
    printf("My number has value: %d\n", my_number);

    return 0;
}

int multiply_by_two(int number) {
    number = number * 2;
    return number;
}


int my_addition(int input1, int input2) {

    int result = input1 + input2;

    return result;
}

int is_even_or_odd(int number) {

    if (number % 2 == 0) {
        return 1;
    } else {
        return 0;
    }

    printf("Hello!\n");
    // if the number was neither even or odd, return -1
    return -1;

}