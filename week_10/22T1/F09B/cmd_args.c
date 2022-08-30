// An example program using comand line arguments

#include <stdio.h>

int main(int argc, char *argv[]) {

    printf("argc: %d\n", argc);
    
    int counter = 0;
    while (counter < argc) {
        printf("%d: %s\n", counter, argv[counter]);
        counter++;
    }

    return 0;
}
