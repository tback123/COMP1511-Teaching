#include <stdio.h>
#include <stdlib.h>

#include "list.h"

void handle_command(struct list *pancake, char command);

int main(void) {
    struct list *pancake = create_list();

    // Keep reading commands until EOF
    char command;
    while (scanf(" %c", &command) == 1) {
        handle_command(pancake, command);
    }
    return 0;
}

// Handles a command
void handle_command(struct list *pancake, char command) {
    char input_line[MAX_STR_LENGTH];

    // TODO: Finish this function. Add more command conditions!
    //
    // Important commands:
    // - 'a' <name>: place new pancake onto pancake stack
    // - 'e':        eat top pancake
    // - 'p':        print pancake stack
    //

    if (command == 'a') {
        fgets(input_line, MAX_STR_LENGTH, stdin);
        push_head(pancake, input_line);
        printf("Added: %s", input_line);

    } else if (command == 'e') {
        struct node *popped = pop_front(pancake);

        if (popped == NULL) {
            printf("No pancakes left!\n");
        } else {
            printf("The person ate: %s\n", popped->data);
            free(popped);
        }
    } else if (command == 'p') {
        print_list(pancake);
    }

}