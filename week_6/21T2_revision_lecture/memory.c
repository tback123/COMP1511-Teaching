// Sample program
// Written by Tom Killingback (9/7/21)

#include <stdio.h>

#define SIZE 7

void change_to_5(int *the_variable_to_change);
void change_array(int array[SIZE]);

int main(void) {

    int array[SIZE] = {0};
    printf("index 0 of array was: %d\n", array[0]);
      
    int my_var = 1; //0xAB
    printf("My var is: %d\n", my_var);
    
    change_array(array);
    
    int *my_ptr = &my_var;
    change_to_5(my_ptr); // Passing in 0xAB
    printf("My var is: %d\n", my_var);   
    printf("index 0 of array was: %d\n", array[0]); 
    

    return 0; 
}

void change_array(int array[SIZE]) {
    
    array[0] = 5;   
    
}


void change_to_5(int *the_variable_to_change) {
        
       *the_variable_to_change = 5;
    
}
