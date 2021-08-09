#include <stdio.h>
#include <stdlib.h>

#include "list.h"

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