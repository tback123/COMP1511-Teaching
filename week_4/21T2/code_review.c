// Tom Killingback (z5256086 & H11B)
// Makes a rectangle with a diagtional line

#include <stdio.h>

int main(void) {

    // Reading input from user
    int square_size = 0;
    printf("Please enter a size: ");
    scanf("%d", &square_size);
    
    // Print out the square
    int curr_row = 0;
    while (curr_row < square_size) {
        
        int curr_col = 0;
        while (curr_col < square_size) {

            if (curr_row == curr_col) {
                printf("*");  
            } else {
                printf("-");
            }

            curr_col++;
        }
            
        printf("\n");
        curr_row++;
    } 
    return 0; 
}
