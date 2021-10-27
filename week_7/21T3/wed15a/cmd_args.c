// An example program using comand line arguments

#include <stdio.h>

int main(int argc, char *argv[]) {

    if (argc < 4) {
        printf("not enough arguments!\n");
        return 1;
    }

    printf("%s", argv[3]);

    return 0;
}
