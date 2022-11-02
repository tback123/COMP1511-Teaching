#include <stdio.h>
#include <stdlib.h>

int *create_int_memory() {
    int *my_ptr = malloc(sizeof(int) * 5);
    return my_ptr;
}


int main() {

    int *my_arr = create_int_memory();

    my_arr[0] = 5;
    my_arr[1] = 5;
    my_arr[2] = 5;
    my_arr[3] = 5;

    printf("My value: %d\n", my_arr[0]); 

    return 0;
}