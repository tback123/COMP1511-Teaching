// An example program using comand line arguments

#include <stdio.h>

int main(int argc, char *argv[]) {

    // Argc == the number of argument
    printf("argc was: %d\n", argc);

    // Argv == The array of arguments
    int i = 0;
    while (i < argc) {
        printf("%d: %s\n", i, argv[i]);
        i++;
    }
    
    return 0;
}
