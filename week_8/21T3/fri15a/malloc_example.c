// An example program using malloc
// Written by Tom's COMP1511 class

#include <stdio.h>
#include <stdlib.h>

// Gets me rnough space for 1 int (1 bedroom)
int *realestate_agent();

int main(void) {

    int *the_new_house = realestate_agent();

    *the_new_house = 8;

    printf("%d\n", *the_new_house);

    return 0;
}

int *realestate_agent() {

    int *house;

    house = malloc(sizeof(int));

    return house;

}