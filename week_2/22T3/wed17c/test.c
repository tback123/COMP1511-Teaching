// A file for assorted testing
// Written by w17c

#include <stdio.h>

void print_error(void) {
    printf("Error\n");
}

int main(void) {

    // Input 2 numbers
    int a = 0;
    int b = 0;
    scanf("%d", &a);
    scanf("%d", &b);

    if (a < b) {
        // print error
        print_error();

    } else if (b == 0) {
        // print error
        print_error();

    } else if (a > b) {
        // print eqtn
        printf("Result: %d\n", a/b);
    }


    return 0;
}

