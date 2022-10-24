#include <stdio.h>
#include <stdlib.h>


int main (void) {

    int *my_ptr = malloc(10 * sizeof(int));

    // Read in 10 numbers
    for (int i = 0; i < 10; i++) {
        scanf("%d", &my_ptr[i]);
    }
    
    printf("---------------\n");

    // Print out 10 numbers
    for (int i = 0; i < 10; i++) {
        printf("%d\n", my_ptr[i]);
    }

    return 0;
}