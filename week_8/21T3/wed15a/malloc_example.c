// An example program using malloc
// Written by Tom's COMP1511 class

#include <stdio.h>
#include <stdlib.h>


int main(void) {

    int *int_ptr = malloc(sizeof(int));
    // returns a pointer to some un-initialised memory that is large enough for an int

    *int_ptr = 4;

    printf("%d\n", *int_ptr);

    free(int_ptr);

    return 0;
}