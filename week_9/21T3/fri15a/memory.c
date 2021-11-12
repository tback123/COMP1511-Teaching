#include <stdio.h>
#include <stdlib.h>


int main (void) {

    
    // Malloc Refresher (I/O)
    int *my_ptr = malloc(sizeof(int));
    *my_ptr = 5;

    // What is a memory-leak
    /*
        malloc'ing with out free'ing
    */

    
    // Why are these bad bugs?
    /*
        - really hard to detect
    */

    
    // What does free do?
    /*
        - Opposite of malloc
        - 'un-malloc' some allocated space
        - 1 free for every malloc
    */


    // What are the inputs of free?
    /* 
        - The address of the memory to free.
    */

    free(my_ptr);

    // What is 'user after free'
   *my_ptr = 10;

   // Why is this bad 
   /*
        - Really hard to detect
        - free & use memory in different locations
        - runtime errors
   */


    return 0;
}