// An implementation of a list ADT

typedef struct list *List;

struct list {
    struct node *head;
};

struct node {
    int data;
    struct node *next;
};

// Creates and returns a new list
List new_list();

// Given a list, adds 'data' to the end of the list
void list_add(List list, int data);

// Prints out the entire list
void print_list(List list);