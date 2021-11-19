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
    head = add_tail(head, 10);
    head = add_tail(head, 2);
    head = add_tail(head, 8);
    head = add_tail(head, 30);
    head = add_tail(head, 9);

    print_list(head);

    // Todo find min of linked list
    int min = find_min(head);

    printf("Min was: %d\n", min);

    return 0;
}

// Implement find_min here
int find_min(struct node *head) {

    printf("Looking at node: %d\n", head->data);

    // check if nothing else left in list
    if (head->next == NULL) {
        return head->data;
    }

    // Find min of the remaining list
    int min_of_remaining_list = find_min(head->next);

    // compare firt with min of everything else
    if (head->data < min_of_remaining_list ) {
        return head->data;
    } else {
        return min_of_remaining_list;
    }

}















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