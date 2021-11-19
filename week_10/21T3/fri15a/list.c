#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "list.h"

struct list *create_list() {
    struct list *new = malloc(sizeof(struct list));
    new->nodes = NULL;

    return new;
};

struct node *create_node(char *value) {
    struct node *new = malloc(sizeof(struct node));
    strcpy(new->data, value);
    new->next = NULL;

    return new;
};

// Pushes a new node to the head of a given linked list
void push_head(struct list *list, char *value) {
    struct node *new = create_node(value);

    new->next = list->nodes;
    list->nodes = new;
}

// Pushes a new node to the tail of a given linked list
void push_tail(struct list *list, char *value) {
    struct node *new = create_node(value);

    if (list->nodes == NULL) {
        list->nodes = new;
        return;
    }

    struct node *curr = list->nodes;
    while (curr->next != NULL) {
        curr = curr->next;
    }

    curr->next = new;
}

// Pops the node at the head of a given linked list and returns it
struct node *pop_front(struct list *list) {
    if (list->nodes == NULL) {
        return NULL;
    }

    struct node *old_head = list->nodes;
    list->nodes = list->nodes->next;
    return old_head;
}

// Pops the node at the tail of a given linked list and returns it
struct node *pop_back(struct list *list) {
    if (list->nodes == NULL) {
        return NULL;
    }

    struct node *curr = list->nodes;
    struct node *prev = NULL;
    while (curr->next != NULL) {
        prev = curr;
        curr = curr->next;
    }

    if (prev == NULL) {
        list->nodes = NULL;
    } else {
        prev->next = NULL;
    }

    return curr;
}

// Insert a new node at position `index` of a linked list. If index is negative,
// inserts at head, if index is larger than size, inserts at tail.
void insert_at_index(struct list *list, char *value, int index) {
    struct node *new = create_node(value);
    if (index < 0 || list->nodes == NULL) {
        new->next = list->nodes;
        list->nodes = new;
    }

    int i = 0;
    struct node *curr = list->nodes;
    struct node *prev = NULL;
    while (curr != NULL && i != index) {
        i++;
        curr = curr->next;
    }

    if (prev == NULL) {
        new->next = list->nodes;
        list->nodes = new;
    } else {
        new->next = curr;
        prev->next = new;
    }
}

// Returns the data at the head of the given linked list
char *peek_top(struct list *list) {
    if (list->nodes == NULL) {
        return NULL;
    }

    return list->nodes->data;
}

// Returns the data at the `index` node in the given linked list. Returns
// NULL if index not in range.
char *peek_index(struct list *list, int index) {
    int i = 0;
    struct node *curr = list->nodes;
    while (curr != NULL && i != index) {
        i++;
        curr = curr->next;
    }

    if (curr == NULL) {
        return NULL;
    }

    return curr->data;
}

// Prints a given linked list from head to tail
void print_list(struct list *list) {
    struct node *curr = list->nodes;
    while (curr != NULL) {
        printf("%s", curr->data);
        curr = curr->next;
    }
}