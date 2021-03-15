// Tom Killingback
// Zeros array and then sums two elements

#include <stdio.h>

// in: array
// out: the sum of first & third elements
// name: firstThird
void firstThird(int the_array[]);

int main(void) {

    int zeros[4] = {3,4,5,6};

    firstThird(zeros);
    printf("the result was: %d\n", zeros[3]);

    return 0;

}


void firstThird(int the_array[]) {

    int sum = the_array[0] + the_array[2];
    the_array[3] = sum;

}