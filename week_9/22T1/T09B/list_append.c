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
struct node *list_append(struct node *head, int data);

int main(void) {

    struct node *head = create_list();

    print_list(head);
    
    printf("####\n");
        
    head = list_append(head, 11);
    print_list(head);
        
    printf("####\n");


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

























struct node *list_append(struct node *head, int data) {

    // Check if empty list
    if (head == NULL) {
        struct node *new_node = create_node(data);
        return new_node;
    }

    // Find the last node in the list
    struct node *curr = head;
    while (curr->next != NULL) {
        curr = curr->next;
    }    
    
    // Add our new node to the end;
    struct node *new_node = create_node(data);
    curr->next = new_node;
    
    return head;
}











