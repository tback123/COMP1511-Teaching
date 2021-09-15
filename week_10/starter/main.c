// A same use of an ADT

#include <stdio.h>

#include "list.h"

int main(void) {

    // Createa list 
    List my_list = new_list();

    // Add 1 & 2 to the list.
    list_add(my_list, 1);
    list_add(my_list, 2);
    print_list(my_list);

    list_add(my_list, 5);
    list_add(my_list, 6);
    print_list(my_list);

    return 0;
}