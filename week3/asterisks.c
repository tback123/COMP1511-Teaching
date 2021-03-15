// a program that reads in an integer and prints out that many asterisks, each on a new line.
// Tom Killingback 21T1

#include <stdio.h>

int main(void) {
    
    int counter = 0;
    int size = 0;
    
    printf("Please enter a size: ");
    scanf("%d", &size);
    
    while (counter < size) {
        
        printf("*\n");
        
        counter++;
        
    }

    return 0;
}
