#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};


struct node *create_node(int my_data) {

    struct node *my_ptr = malloc(sizeof(struct node));
    my_ptr->data = my_data;
    my_ptr->next = NULL;

    return my_ptr;

}

int main() {

    struct node *first_node = create_node(1);
    first_node->next = create_node(2);
    first_node->next->next = create_node(3);

    printf("My value: %d\n", first_node->data); 
    printf("My value: %d\n", first_node->next->data); 
    printf("My value: %d\n", first_node->next->next->data); 

    return 0;
}