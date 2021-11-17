// An example of minimium in both recurstive & iterative methods
// Note this 
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int minimum(struct node *head);

int main(void) {

    struct list *head = new_list();
    list_add(head, 1);
    list_add(head, 4);
    list_add(head, 10);
    list_add(head, -5);

    print_list(head);

    int min = minimum(head->head);

    printf("Min was: %d\n", min);

    return 0;
}

int minimum(struct node *head) {

    if (head == NULL) {
        return -1;
    }

    // Check if looking at the last thing in the list
    if (head->next == NULL) {
        return head->data;
    }

    // Get the min value of everything else
    // in the list
    int next_min = minimum(head->next);

    // Compare the min of everything else
    // with what we're currently looking at
    if (head->data > next_min) {
        return next_min;
    } else {
        return head->data;
    }

    while (curr != null) {
        temp = curr->next;
        free(curr)
        curr = temp;

    }

}