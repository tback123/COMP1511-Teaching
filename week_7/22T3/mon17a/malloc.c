#include <stdio.h>
#include <stdlib.h>

int *my_function() {

    //  create space, big enough for an int
    int *my_ptr = malloc(sizeof(int));

    return my_ptr;

}

int main (void) {

    int *my_ptr = my_function();

    *my_ptr = 4;

    return 0;
}