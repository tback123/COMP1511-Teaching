// Sample array minipulation program
// Taken from the 1511 Week 4 Tutorial Questions

#include <stdio.h>

#define SIZE 4

void change_array_element(int arr[SIZE]);

int main(void) {
    // Array of length 4
    int my_array[SIZE] = {0};

    // Print array
    printf("Index: %d - Value: %d\n", 0, my_array[0]);
    printf("Index: %d - Value: %d\n", 1, my_array[1]);
    printf("Index: %d - Value: %d\n", 2, my_array[2]);
    printf("Index: %d - Value: %d\n", 3, my_array[3]);

    // Change index 1
    change_array_element(my_array);

    // Print array
    printf("Index: %d - Value: %d\n", 0, my_array[0]);
    printf("Index: %d - Value: %d\n", 1, my_array[1]);
    printf("Index: %d - Value: %d\n", 2, my_array[2]);
    printf("Index: %d - Value: %d\n", 3, my_array[3]);

}


void change_array_element(int arr[SIZE]) {
    arr[1] = 42;
}