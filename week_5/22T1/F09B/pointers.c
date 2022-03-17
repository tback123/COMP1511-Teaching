#include <stdio.h>

void change_variable_to_5(int *variable);

int main (void) {

    int num = 0;
    
    change_variable_to_5(&num);
    
    printf("Num: %d\n", num);

    return 0;
}

void change_variable_to_5(int *variable) {

    *variable = 5;
    printf("Variable: %d\n", *variable);

}
