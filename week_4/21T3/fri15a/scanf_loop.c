// An example program for using scanf in a loop
// Written by Tom's 1511 Tutorial

#include <stdio.h>

int main(void) {

    int my_num = 0;
    int my_other_num = 0;
    
    // Initi
    int result = scanf("%d %d", &my_num, &my_other_num);
    // Condition
    while (result == 2) {

        printf("num was: %d\n", my_num);
        printf("other num was: %d\n", my_other_num);

        // Update to condition
        result = scanf("%d %d", &my_num, &my_other_num);
    }

    printf("The end!\n");

    return 0;
}