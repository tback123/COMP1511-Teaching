#include <stdio.h>

#define MAX_LETTERS 100

int main (void) {

    char buffer[MAX_LETTERS];

    while (fgets(buffer, MAX_LETTERS, stdin) != NULL) {
        printf("Input: %s\n", buffer);
    }
    
    printf("Got EOF!\n");

    /*
    char my_var;
    while (scanf(" %c", &my_var) == 1) {
        printf("Input: %c\n", my_var);
    }
    */
    

    return 0;
}