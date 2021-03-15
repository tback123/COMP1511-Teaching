// Program to read a number
// and print/count up from 1
// Tom Killingback 21T1 FOR Program

#include <stdio.h>

int main(void) {

    int counter = 1;
    int mr_beans_number;
    
    printf("Enter a number: ");
    scanf("%d", &mr_beans_number);
    
    while (counter <= mr_beans_number) {
        printf("%d\n", counter);
        counter++;
    }
    
    return 0;

}
