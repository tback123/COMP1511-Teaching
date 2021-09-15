#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
};

int main (void) {

    /*
    What does malloc do?
    - Allocates memory in your computer
    - The memory is persistant, once created i.e Can be accessed anywhere once created

    What are its inputs and outputs?
    - Inputs: The number of bytes to reserve / allocate
    - Outputs: Where that allocated memory is

    What does free do?
    - Releases the memory from our use
    - Every Malloc should have a pair with free

    What are the inputs of free?
    - free( POINTER to the memory to free)

    What is 'user after free'
    - 'knocking down a house then trying to go into it'

    Why are these bad bugs?
    - Becasue we're still able to compile
    
    What is a memory-leak
    - When we malloc memeory but don't free it before the end of the program

    */

    struct node *my_pointer = malloc(sizeof(struct node));

    my_pointer->data = 10;

    

    return 0;
}