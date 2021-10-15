#include <stdio.h>

void change_variable_to_5(int *variable);

int main (void) {

    int num = 0;
    int *my_ptr = &num;

    //printf("%x\n", my_ptr);

    change_variable_to_5(my_ptr);
    printf("%d\n", num);

    return 0;
}

void change_variable_to_5(int *variable) {
    // int variable  = d293200;
    *variable = 5;
}