// An example program using comand line arguments

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    printf("argc: %d\n", argc);
    
    if (argc != 3) {
        printf("You used the program wrong\n");
        return 0;
    }
    
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    
    printf("Sum: %d\n", num1 + num2);

    return 0;
}
