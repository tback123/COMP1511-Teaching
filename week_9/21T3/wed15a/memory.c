#include <stdio.h>
#include <stdlib.h>


int main (void) {

    
    // Malloc Refresher (I/O)
    // Created enough space for a single int
    int *my_ptr = malloc(sizeof(int));
    *my_ptr = 10;

    // What is a memory-leak
    // Mallocing some space, without free'ing it when
    // we're done with it
    // use --leakcheck to find these!


   // What does free do?
   // Where is the memory you'd like to free
   free(my_ptr);


    // What are the inputs of free?
    // The address of the memory to free.


    // What is 'user after free'
    *my_ptr = 15;


    // Why are these bad bugs?
    /*
        - they're not compile time errors (no warning) / runtime errors
        - Free and use memory in differnt places

    */
    

    


    return 0;
}