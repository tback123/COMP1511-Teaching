// a program that reads in an integer and prints out that many asterisks, each on a new line.
// Tom Killingback 21T1

#include <stdio.h>

int main(void) {
    
    int input = 0;
    printf("Please enter an integer: ");
    scanf("%d", &input);

    int row = 0;
    while (row < input) {
        printf("*\n");
        row++;
    }

    return 0;
}