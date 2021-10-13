#include <stdio.h>

void change_variable_to_5(int *variable);

int main (void) {

    int num = 0;
    // int *my_ptr = &num;

    change_variable_to_5(&num);
    printf("%d\n", num);

    return 0;
}

void change_variable_to_5(int *variable) {
    // variable == 0x1F
    *variable = 5;
}