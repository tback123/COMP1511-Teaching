// Program to read a number
// and print/count up from 1
// Tom Killingback 21T2 FOR Program

#include <stdio.h>

int main(void) {

    int input = 0;
    printf("Please enter a number: ");
    scanf("%d", &input); // input = what ever number tom types

    int counter = 1;
    while (counter <= input) {
    
        // This is what happens everytime the loop executes
        // printf("The number was: %d\n", counter);

        if ((counter % 2) == 0) {
            // Counter is even
            printf("The number was EVEN: %d\n", counter);
        } else {
            // counter must be odd
            printf("The number was ODD: %d\n", counter);
        }

        counter++;
    }
    
    
    return 0;

}

/*

    a == b check if a is equal than b
    a < b check if a less than b
      >
    a <= b 
    a >= b


*/

