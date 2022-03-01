// A program to show the use case of a loop
// Written by Tom's COMP1511 Tutorial

#include <stdio.h>

int main(void) {

    int num_rows = 0;
    int num_cols = 0;
    printf("enter row & cols: ");
    scanf("%d %d", &num_rows, & num_cols); 

    int counter = 0;
    
    while ( counter < num_rows ) {
    
        int counter_2 = 0;
        while (counter_2 < num_cols) {
            printf("*");
            counter_2++;
        }
        
        printf("\n");
        
        counter++;
    
    }

    printf("Thank you!\n");

    return 0;
}
