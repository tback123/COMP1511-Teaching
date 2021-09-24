// A while inside a while (tick tock)
// Demonstrating how you can put a while inside a while to print out a 
// pyramid of numbers
// Sasha Vassar Week 2, Lecture 3


#include <stdio.h>


/* Problem: Print out a grid of numbers that looks like this: 
                    row     col     no_of_rows
1                    1       1          1 
1 2                  2       2          2  
1 2 3                3       3          3  
1 2 3 4              4       4
1 2 3 4 5            5       5   
    
So we are printing out a half a square... 

*/

int main (void) {
 
    int col = 1;
    int size;
    printf("How big do you want the pyramid to be? ");
    scanf("%d", &size);
    
    while (col <= size) { //2 <= 5?
        int row = 1;   
          
        while (row <= col) { // 1 < = 1?
            printf("%d ", row);  // 1
            row = row + 1;       // row = 2   
        }
        printf("\n");
        col = col + 1;      // col = 2
        //no_rows = no_rows + 1; // no of rows = 2
    }
    
    return 0;
}
