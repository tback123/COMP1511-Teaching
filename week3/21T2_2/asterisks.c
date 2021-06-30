// a program that reads in an integer and prints out that many asterisks, each on a new line.
// Tom Killingback 21T2

#include <stdio.h>

int main(void) {
    
    int counter_rows = 0;
    int size = 0;
    
    printf("Please enter a size: ");
    scanf("%d", &size);
    
    while (counter_rows < size) {
        // New row

        int counter_cols = 0;
        while (counter_cols < size) {
            // New column

            if (counter_rows == counter_cols) {
                // Must be on the diagional
                printf("* ");
            } else {
                // Must not be on the diagional
                printf("- ");
            }

            

            counter_cols++;
        }

        printf("\n");
        
        
        counter_rows++;
    }

    return 0;
}
