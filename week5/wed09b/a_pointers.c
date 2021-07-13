#include <stdio.h>

void change_variable_to_5(int *variable);

int main (void) {

    int num = 0; // Has address 0xAB (for example)
    int *my_pointer = &num; // my_pointer = 0xAB

    change_variable_to_5(my_pointer); // 0xAB is passed into function
    printf("%d\n", num);

    return 0;
}

void change_variable_to_5(int *variable) {
    // Goto 0xAB and set the value to 5
    // this sets the value of 'num' = 5
    *(variable) = 5;
}