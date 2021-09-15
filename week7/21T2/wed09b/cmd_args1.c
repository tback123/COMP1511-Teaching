// An example program using comand line arguments

#include <stdio.h>

int main(int argc, char *argv[]) {

    // Dispaly the number of command line arguments
    printf("argc was: %d\n", argc);

    // Loop through the cmd line args, and print out
    int i = 0;
    while (i < argc) {
        printf("%d: %s\n", i, argv[i]);
        i++;
    }

    return 0;
}

