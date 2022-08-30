// An example of minimium in both recurstive & iterative methods
// Note this 

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

// Linked list functions
struct node *create_node(int data);
struct node *add_tail(struct node *head, int data);
void print_list(struct node *head);

// recursivly find the min value of a linked list
int find_min(struct node *head);

int main(void) {

    struct node *head = NULL;
    head = add_tail(head, 1);
    head = add_tail(head, 2);
    head = add_tail(head, 3);

    print_list(head);

    // Todo find min of linked list


    return 0;
}

// Implement find_min here


// Creates a node
struct node *create_node(int data) {
    struct node *new_node = malloc(sizeof(struct node));
    new_node->next = NULL;
    new_node->data = data;
    return new_node;
}

// Create and add a node at the tail & return the head
struct node *add_tail(struct node *head, int data) {

    struct node *new_node = create_node(data);

    // If list is empty, add new at the begining
    if (head == NULL) {
        return new_node;
    }

    // Find the last node
    struct node *curr = head;
    while (curr->next != NULL) {
        curr = curr->next;
    }

    // Append the new node to the tail
    curr->next = new_node;

    // Return the head
    return head;

}

// Print the list
void print_list(struct node *head) {

    printf("####\n");

    struct node *curr = head;
    while (curr != NULL) {
        printf("Data: %d\n", curr->data);
        curr = curr->next;
    }

    printf("####\n");

}