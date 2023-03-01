// Example program

#include <stdio.h>

void my_proc() {
    printf("Error!\n");
    printf("You should check how to use this program\n");
}

int main(void) {

    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);

    if (a < b) {
        my_proc();
    } else if (b == 0) {
        my_proc();
    } else if (a > b) {
        printf("Math: %d\n", a/b);
    }

    return 0;
}