// Written by F12A
// An example of how to use arrays and functions together

#include <stdio.h>

#define SIZE 9

void change_array(int the_array_to_change[]);
void print_array(int array_to_print[]);

int main(void) {

    int my_array[SIZE] = {1,2,3,4,5,6,7,8,9}; 

    my_array[4] = 100;

    printf("The array before changing was:\n");
    print_array(my_array);

    change_array(my_array);

    printf("The array after changing was:\n");
    print_array(my_array);

    return 0;
}

void change_array(int the_array_to_change[]) {

    int counter = 0;
    while(counter < SIZE) {

        the_array_to_change[counter] = counter * counter;

        counter++;

    }

}

void print_array(int array_to_print[]) {

    int counter = 0;
    while(counter < SIZE) {

        printf("Number was: %d\n", array_to_print[counter]);

        counter++;

    }

}
