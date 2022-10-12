#include <stdio.h>

#define SIZE 4

int square(int x) {
    x = x * x;
    return x;
}

void square_array(int my_array[SIZE], int size) {

    for (int i = 0; i < size; i++) {
        my_array[i] = square(my_array[i]);
    }

}

int main(void) {

    // Creating array
    int arr[SIZE] = {6, 2, 6, 4};

    // Printing
    for (int i = 0; i < SIZE; i++) {
        printf("%2d ", arr[i]);
    }
    printf("\n");

    // Square the array
    square_array(arr, SIZE);

    // Print the array again
    for (int i = 0; i < SIZE; i++) {
        printf("%2d ", arr[i]);
    }
    printf("\n");

    return 0;
}