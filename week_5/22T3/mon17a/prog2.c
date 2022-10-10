#include <stdio.h>

#define SIZE 5

int square(int x) {
    x = x * x;
    return x;
}

void square_array(int my_array[], int length) {

    for (int i = 0; i < SIZE; i++) {
        my_array[i] = square(my_array[i]);
    }

}

int main(void) {

    int input_arr[SIZE] = {5, 4, 3, 2, 1};

    printf("value before square:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%2d ", input_arr[i]);
    }
    printf("\n");

    //call square, copying the value of input into `int x`
    square_array(input_arr, SIZE);

    printf("value after square:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%2d ", input_arr[i]);
    }
    printf("\n");

    return 0;
}