// An example program using comand line arguments

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    printf("Num args: %d\n", argc);
    
    int i = 0;
    while (i < argc) {
        printf("%s\n", argv[i]);
        i++;
    }
    
    // Check enough numbers
    if (argc != 3) {
        printf("Not correct usage!\n");
        return 0;
    }
    
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    
    printf("Sum is: %d\n", num1 + num2);

    return 0;
}
