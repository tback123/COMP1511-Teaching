// a program that reads in an integer and prints out that many asterisks, each on a new line.
// Tom Killingback 21T2

#include <stdio.h>

int main(void) {
    
    int rows = 0;
    int size = 0;
    
    printf("Please enter a size: ");
    scanf("%d", &size);
    
    while (rows < size) {
        
        int cols = 0;
        while (cols < size) {
            printf("(%d,%d) ", rows, cols);
            cols++;
        }
        printf("\n");
        
        rows++;
    }

    return 0;
}
