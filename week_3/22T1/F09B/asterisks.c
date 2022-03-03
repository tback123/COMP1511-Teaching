// A program to show the use case of a loop
// Written by Tom's COMP1511 Tutorial

#include <stdio.h>

int main(void) {

    // TODO: write print this out 10 times
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int curr_row = 0;

    while ( curr_row < rows ) {
    
        
        int curr_col = 0;
        while (curr_col < cols) {
            
            if (curr_row == curr_col) {
                printf("*");
            } else {
                printf("-");
            }
        
            // printf("(%d, %d) ", curr_row, curr_col);
            curr_col++;
        }       
        
        printf("\n");
        curr_row++;
    }


    printf("Thank you!\n");

    return 0;
}
