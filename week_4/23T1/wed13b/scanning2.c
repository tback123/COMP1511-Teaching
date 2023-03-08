#include <stdio.h>

int main(void) {
    
    int num;

    int result = scanf("%d", &num);
    while (result == 1) {
        printf("Result: %d\n", result);
        result = scanf("%d", &num);
    }

    printf("Goodbye\n");

    return 0;
}