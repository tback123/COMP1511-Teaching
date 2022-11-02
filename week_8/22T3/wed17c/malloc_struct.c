#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *create_node() {
    struct node *my_ptr = malloc(sizeof(struct node));
    my_ptr->data = 0;
    my_ptr->next = NULL;
    return my_ptr;
}

int main() {
    
    struct node *head = create_node();
    head->next = create_node();
    
    printf("My node value: %d\n", head->data); 
    printf("My other_node value: %d\n", head->next->data); 

    head->next->data = 35;

    printf("-----\nMy node value: %d\n", head->data); 
    printf("My other_node value: %d\n", head->next->data); 

    return 0;
}