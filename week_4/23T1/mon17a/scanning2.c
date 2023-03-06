#include <stdio.h>

int main(void) {
    
    int num;
    int result = scanf("%d", &num);

    while (result == 1) {
        printf("Number was: %d\n", num);
        result = scanf("%d", &num);
    }

    printf("%d\n", result);

    return 0;
}