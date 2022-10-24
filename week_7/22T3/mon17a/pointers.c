#include <stdio.h>
                      
void change_value(int *the_pointer) {

    *the_pointer = 23;

    int toms_height = 140;

}


int main (void) {

    int my_age = 22;
    int *my_ptr = &my_age;

    printf("my_age value:  %d\n", my_age);
    printf("my_age memory: %p\n\n", &my_age);

    printf("my_ptr value:  %p\n", my_ptr);
    printf("my_ptr memory: %p\n", &my_ptr);

    change_value(my_ptr);

    printf("\nmy_age value:  %d\n", my_age);

    return 0;
}