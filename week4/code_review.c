// Written by Tom Killingback & F12A
// Makes a rectangle with a diagtional line

#include <stdio.h>

int main(void) {

    int size = 0;
    printf("Please enter a size: ");
    scanf("%d", &size);
    

    int row = 0;
    while (row < size) {
    
        int col = 0;

        while (col < size) {
            
            // Check if diagional
            if (row == col) {
                printf("*");
            } else {
                printf("-");
            }
            col++;

        }
        printf("\n");
        row++;
    }

    return 0;
}
