#include <stdio.h>

int change_number(int num);

int main(void) {

    int num = 5;

    printf("Before function: %d\n", num);
    num = change_number(num);
    printf("After function: %d\n", num);

    return 0;
}

// Change the given variable "num" to be the value 10
int change_number(int num) {
    num = 10;
    return num;
}