#include <stdio.h>
#include <stdlib.h>

void my_function() {
    
}


int main() {

    int *addr = malloc(sizeof(int));

    printf("My ptr  : %p\n", addr);
    printf("My value: %d\n", *addr);

    return 0;
}