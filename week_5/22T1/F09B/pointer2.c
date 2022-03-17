#include <stdio.h>



int main (void) {

    int my_age = 21;
    int *my_ptr = &my_age;

    printf("my_age val : %d\n", my_age);    
    printf("my_age addr: %p\n\n", &my_age);
    
    printf("my_ptr val : %p\n", my_ptr);    
    printf("*my_ptr val : %d\n", *my_ptr); 
    printf("my_ptr addr: %p\n", &my_ptr);

    return 0;
}


