// Program to read a number
// and print/count up from 1
// Tom Killingback 21T2 FOR Program

#include <stdio.h>

int main(void) {

    int counter = 1;
    int input = 0;
    int product = 1;

    scanf("%d", &input);
    printf("The input number was %d\n", input);

    while (counter <= input) {

        // Checking if counter is divisible by 2
        if (counter % 2 == 0) {
            printf("The number: %d\n", counter);     
        }
        
        product = product * counter;

        // Incrementing the counter
        counter++;

    }

    printf("The product was: %d\n", product);
    
    return 0;

}
