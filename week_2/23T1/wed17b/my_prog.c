// Example program

#include <stdio.h>

void error_msgs(void) {
    printf("Error!\n");
    printf("Check the program!\n");
}

int main(void) {

    // Input some numbers
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);

    // Check conditions
    if (a < b) {
        error_msgs();

    } else if (b == 0) {
        error_msgs();

    } else if (a > b) {
        printf("math: %d\n", a/b);

    } else {
        error_msgs();
    }

    return 0;
}