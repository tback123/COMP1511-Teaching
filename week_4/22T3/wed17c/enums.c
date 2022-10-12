// colours
// Written by Tom's Tut

#include <stdio.h>

enum colours {
    RED, // 0
    GREEN, // 1
    BLUE  // 2
};

int main(void) {

    enum colours my_colour = RED;

    printf("Value: %d\n", my_colour);

    return 0;
}

