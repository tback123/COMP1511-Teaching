// a program that reads in an integer and prints out an nxn square
// Tom Killingback 21T1

#include <stdio.h>

int main(void) {
    
    int input = 0;
    printf("Please enter an integer: ");
    scanf("%d", &input);

    int row = 0;
    while (row < input) {

        int col = 0;
        while (col < input) {
            printf("*");
            col++;
        }
        
        printf("\n");
        row++;
    }

    return 0;
}