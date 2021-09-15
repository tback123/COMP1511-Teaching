#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
};

int main (void) {

    /*
    What does malloc do?
    - Reserves some memory that is persistant thoughout the program (i.e. outside the function that created it)

    What are its inputs and outputs?
    - Input: Number of bytes to reserve
    - Output: The address of the allocated memory

    What does free do?
    - un-reserves the memery reserved by malloc
    - Every malloc must have a free

    What are the inputs of free?
    - A pointer to the memory to un-reserve

    What is 'user after free'
    - Trying to access parts of 'the house' that has already been 'knocked down'

    Why are these bad bugs?
    - They're runtime errors (i.e. will let you compile)
    
    What is a memory-leak
    - When we don't free memory that we've malloc'd

    */

    struct node *my_ptr = malloc(sizeof(struct node));

    my_ptr->data = 7;

    return 0;
}
