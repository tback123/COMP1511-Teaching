// Sample code with error in it
// Taken from COMP1511 W9 Tutorial Questions

typedef (struct node *) Node
typedef [ Replace ]    [Find]

// Given some data, return a new node with that data in it.
struct node *new_node(int data) {

    // struct node *new = malloc(sizeof(struct node *));
    // struct node *new = malloc(sizeof(Node));
    struct node *new = malloc(sizeof(struct node));
    new->data = data;

    return new;
}