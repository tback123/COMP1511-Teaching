// Tom Killingback
// variables vs constants

#include <stdio.h>

#define MY_CONST 43

int main(void) {

    int x = 5;
    
    printf("%d\n", x);
    
    x = x + MY_CONST;

    printf("%d\n", x);
    
    // MY_CONST = 21;
    
    // printf("%d\n", MY_CONST);

    return 0;
}
