#include <stdio.h>

void change_variable_to_5(int *variable);

int main (void) {

    int num = 0;
    change_num_to_5(&num);
    printf("%d\n", num);

    return 0;
}

void change_variable_to_5(int *variable) {

    *variable = 5;

}