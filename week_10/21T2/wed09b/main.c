// A same use of an ADT

#include <stdio.h>

#include "list.h"


#include <stdio.h>
#include <stdlib.h>

typedef struct list *List;

struct list {
    struct node *head;
};

struct node {
    int data;
    struct node *next;
};

List new_list() {
    List new_list = malloc(sizeof(struct list));
    new_list->head = NULL;
    return new_list;
}

struct node *new_list_node(int data) {
    struct node *new = malloc(sizeof(struct node));
    new->next = NULL;
    new->data = data;
    return new;
}

void list_add(List list, int data) {
    // Check if there is at least one thing in the list
    if (list->head == NULL) {
        list->head = new_list_node(data);
        return;
    }

    // Start at the begining and look for the last node
    // in the list
    struct node *curr = list->head;
    while (curr->next != NULL) {
        curr = curr->next;   
    }

    // CURR == Last element in the list
    
    // Create the new node
    struct node *new_node = new_list_node(data);

    // Link to end of list
    curr->next = new_node;

    return;

}

void print_list(List list) {

    printf("### START OF LIST ###\n");

    struct node *curr = list->head;
    while (curr != NULL) {
        printf("Data: %d\n", curr->data);

        curr = curr->next;
    }

    printf("### END OF LIST ###\n");

}
















int minimmum(struct node *head);

int main(void) {

    // Createa list 
    List my_list = new_list();

    // Add 1 & 2 to the list.
    list_add(my_list, 8);
    list_add(my_list, 2);
    list_add(my_list, 11);
    list_add(my_list, -3);
    list_add(my_list, 4);
    list_add(my_list, 1);
    print_list(my_list);

    int min_value = minimmum(my_list->head);

    printf("The smallest value was: %d\n", min_value);


    return 0;
}

// Takes in the head of a linked list, 
// Returns the smallest value inside it.
int minimmum(struct node *head) {

    // If there's nothing in the list, we can't do anything
    if (head == NULL) {
        return -99;
    }

    // If there is only one thing in the list,
    // That one node, has the smallest value
    if (head->next == NULL) {
        return head->data;
    }

    // Gets the smallest value of everything else in the list
    int next_min = minimmum(head->next);

    // Reutrn which is bigger, the current thing, or an element in
    // the rest of the list
    if (head->data > next_min) {
        return next_min;
    } else {
        return head->data;
    }

}