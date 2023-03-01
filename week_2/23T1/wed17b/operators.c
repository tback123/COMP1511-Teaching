// Example program

#include <stdio.h>

int main(void) {

    int a = 1;
    int b = 0;
    
    printf("A: %d\n", a);
    printf("B: %d\n", b);

    int logic = a || b;
    printf("Result: %d\n", logic);

    int flipped_logic = !logic;
    printf("FResult: %d\n", flipped_logic);


    return 0;
}