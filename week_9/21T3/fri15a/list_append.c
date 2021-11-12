// Sample linked list program

#include <stdio.h>
#include <stdlib.h>

// a generic linked list node (we could use any struct we want here)
struct node {
    int data;
    struct node *next;
};

// Basic helper functions for demo
struct node *create_node(int data);
struct node *create_list();
void print_list(struct node *head);

// Functions to implement
struct node *copy_list(struct node *old_head);
struct node *list_append(struct node *head_1, struct node *head_2);

int main(void) {

    struct node *head = create_list();

    print_list(head);

    return 0;
}

// Given some data, return a new node with that data
struct node *create_node(int data) {

    struct node *new_node = malloc(sizeof(struct node));
    new_node->next = NULL;
    new_node->data = data;

    return new_node;

}

// Creates a list of length 4 with data 1-4 and returns a pointer
// to the first element in the list
struct node *create_list() {

    struct node *first_node = create_node(1);
    struct node *second_node = create_node(2);
    struct node *third_node = create_node(3);
    struct node *fourth_node = create_node(4);

    first_node->next = second_node;
    second_node->next = third_node;
    third_node->next = fourth_node;

    return first_node;

}

void print_list(struct node *head) {

    struct node *curr = head;
    while (curr != NULL) {
        printf("Data: %d\n", curr->data);

        curr = curr->next;
    }

}

// Given a linked list, creates an idential linked list
// Returns the head of this new linked list
struct node *copy_list(struct node *old_head) {

    // Is the list empty?
    if (old_head == NULL) {
        // Nothing in the list, therefore, nothing to copy!
        return NULL;
    }

    // Create the first node, with data from the old first node
    struct node *new_head = create_node(old_head->data)

    // Setup points

    // Point to the new list
    struct node *prev = new_head;

    // Point to the old list
    struct node *curr = old_head->next;

    // Move through the old list and copy to the new list.
    while (curr != NULL) {
        struct node *new = create_node(curr->data);
        prev->next = new;
        prev = prev->next;
        curr = curr->next;
    }
    
    return new_head;
}

struct node *list_append(struct node *head_1, struct node *head_2) {

    // Create copy of the origional 2 lists
    struct node *list_1_copy = copy_list(head_1);
    struct node *list_2_copy = copy_list(head_2);

    // find the end of the first list
    struct node *curr = list_1_copy;
    while (curr->next != NULL) {
        curr = curr->next
    }

    // Link last node of list 1 to first node of list 2
    curr->next = list_2_copy;

    // Return the head of the new list.
    return list_1_copy;
}