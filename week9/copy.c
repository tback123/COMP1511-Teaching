#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct node {
    struct node *next;
    int          data;
};

struct node *create_node(int value);
struct node *copy(struct node *head);
struct node *strings_to_list(int len, char *strings[]);
void print_list(struct node *head);

// DO NOT CHANGE THIS MAIN FUNCTION

int main(int argc, char *argv[]) {
    // create linked list from command line arguments
    struct node *head = NULL;
    if (argc > 1) {
        // list has elements
        head = strings_to_list(argc - 1, &argv[1]);
    }

    struct node *head_copy = copy(head);
    printf("head at %p: ", head);
    print_list(head);
    printf("head_copy at %p: ", head_copy);
    print_list(head_copy);

    return 0;
}

struct node *create_node(int value) {
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = value;
    new_node->next = NULL;
    return new_node;
}

//////////////////////////////////////////////////////////////////////
// Create a copy of the list given
// The head of the copy is returned.
struct node *copy(struct node *head) {
    // cover edge case(s)
    if (head == NULL) {
        return NULL;
    }
    // cover the general case: we have an actual head to return
    // create new head
    struct node *head_copy = create_node(head->data);
    struct node *curr = head->next;
    struct node *curr_copy = head_copy;
	
    // while looping through the values of the linked list
    // we want to clone each node (create another node storing the
    // same value, then appending it to the end of the list).
    while (curr != NULL) {
        curr_copy->next = create_node(curr->data);
        curr = curr->next;
        curr_copy = curr_copy->next;
    }
    return head_copy;
}
//////////////////////////////////////////////////////////////////////

// DO NOT CHANGE THIS FUNCTION
// create linked list from array of strings
struct node *strings_to_list(int len, char *strings[]) {
    struct node *head = NULL;
    int i = len - 1;
    while (i >= 0) {
        struct node *n = malloc(sizeof (struct node));
        assert(n != NULL);
        n->next = head;
        n->data = atoi(strings[i]);
        head = n;
        i -= 1;
    }   
    return head;
}

// DO NOT CHANGE THIS FUNCTION
// print linked list
void print_list(struct node *head) {
    printf("[");    
    struct node *n = head;
    while (n != NULL) {
        // If you're getting an error here,
        // you have returned an invalid list
        printf("%d", n->data);
        if (n->next != NULL) {
            printf(", ");
        }
        n = n->next;
    }
    printf("]\n");
}
