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
struct node *list_delete_last(struct node *head);

int main(void) {

    char string[1000];

    fgets(string, 1000, stdin)

    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);


    // struct node *head = create_list();
    struct node *head = create_node(5);

    print_list(head);
    printf("####\n");

    head = list_delete_last(head);

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

struct node *list_delete_last(struct node *head) {

    // Check if there is at least 1 thing in list
    if (head == NULL) {
        return NULL;
    }

    // Check if there is only 1 element in the list
    if (head->next == NULL) {
        // Only 1 element, delete that,
        free(head);
        return NULL;
    }

    // At least 2 elements in the list
    struct node *curr = head;
    while (curr->next->next != NULL) {
        curr = curr->next;
    }

    //curr == second last element in the list
    // Free the last element
    free(curr->next);
    // Set the second last element to point to NULL (making it the new last element)
    curr->next = NULL;

    return head;

}
