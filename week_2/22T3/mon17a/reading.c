// A file for reading in values
// Written by m17a

#include <stdio.h>

int main(void) {

    // Input 2 values
    int a = 0;
    int b = 0;

    printf("Please enter 2 numbers\n");
    scanf("%d", &a);
    scanf("%d", &b);

    if (a < b) {
        printf("First number is too small!\n");
    } else if (b == 0) {
        printf("Can't divide by zero!\n");
    } else if (a > 2) {
        int result = a / b;
        printf("a / b  = %d\n", result);
    }
    
    return 0;
}