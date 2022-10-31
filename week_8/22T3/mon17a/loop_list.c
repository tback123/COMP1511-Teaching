#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};


struct node *create_node(int my_data) {

    struct node *my_ptr = malloc(sizeof(struct node));
    my_ptr->data = my_data;
    my_ptr->next = NULL;

    return my_ptr;

}

void print_list(struct node *first_node) {

    // loop through linked list
    struct node *current = first_node;
    while (current != NULL) {
        printf("My value: %d\n", current->data); 
        current = current->next;
    }

}

int main() {

    struct node *head = create_node(1);
    head->next = create_node(2);
    head->next->next = create_node(3);

    print_list(head);

    // loop through linked list & find last node
    struct node *current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    // current is currenly pointing to the last node!
    current->next = create_node(999);

    printf("------\n");
    print_list(head);

    return 0;
}