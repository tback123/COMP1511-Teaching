#include <stdio.h>

int main() {

    int input;
    printf("Enter Command: ");

    while (scanf("%d", &input) == 1) {

        printf("Got: %d\n", input);

        printf("Enter Command: ");
    }

    printf("Done!!!");

    return 0;
}