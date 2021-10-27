// Write a program to read in a series of letters
// and numbers and count the number of digits

#include <stdio.h>
#include <string.h>

int main(void) {

    printf("Please enter a sentance\n");
    int digit_counter = 0;

    int ch = getchar();
    while (ch != EOF)
    {
        if (ch >= '0' && ch <= '9') {
            printf("it was a digit!\n");
            digit_counter++;
        } else {
            printf("not\n");
        }
        ch = getchar();
    }
    
    printf("The end! - I saw %d of digits!\n", digit_counter);

    return 0;
}