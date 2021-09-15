// A program to test reading in continiously
// keep reading in numbers and mult by 2 until EOF

/*
    CTRL + C = Cancel Program
    CTRL + D = EOF - End of file

    SCANF Reutns
    >0 if matched correctly
    EOF if CTRL + D entered

*/

#include <stdio.h>

int main(void) {

    // Read in a number
    int input = 0;
    printf("Please enter a number: ");
    int scan_reult = scanf("%d", &input);

    // Keep looping until scan_result == EOF
    while (scan_reult != EOF) {
        // Multiply by 2 and display the result
        int result = input * 2;
        printf("The input multiplied by 2 is: %d\n", result);

        // Read in the next number OR EOF
        printf("Please enter ANOTHER number: ");
        scan_reult = scanf("%d", &input);
    }  

    // End the program
    printf("Goodbye!\n");
    return 0;
}