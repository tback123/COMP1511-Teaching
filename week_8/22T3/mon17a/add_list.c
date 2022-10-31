#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {

    struct node *head = malloc(sizeof(struct node));
    head->data = 1;
    head->next = NULL;

    struct node *current = head;
    while (current != NULL) {
        current = current->next;
        printf("Data: %d\n", current->data);
    }

    return 0;
}