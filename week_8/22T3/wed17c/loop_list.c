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

void print_list(struct node *first_node) {

    // Loop and print list
    struct node *current = first_node;
    while (current != NULL) {
        printf("Value : %d\n", current->data);
        current = current->next;
    }
}

int main() {
    
    struct node *head = create_node();
    head->next = create_node();
    head->next->next = create_node();

    print_list(head);
    printf("-----\n");

    head->data = 101;
    head->next->data = 56;
    head->next->next->data = 92;

    print_list(head);
    printf("-----\n");

    // Loop and print list
    struct node *current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    // current is pointing at the last node
    // current->next is NULL
    current->next = create_node();

    print_list(head);

    return 0;
}