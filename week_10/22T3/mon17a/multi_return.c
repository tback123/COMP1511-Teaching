#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct task {
    int data;
    struct task *next;
};

struct completed_task {
    int data;
    struct completed_task *next;
};

struct todo_list {
    struct task *next;
    struct completed_task *next;
};

// INPUTS: todo_list
// OUTPUT: prev & current
void find_node_and_prev(struct todo_list *tl, struct task **curr, struct task **prev, int *start_time) {
    // Reads in some details (name, catagory)

    // Seperates out the values

    // Find this task & previous task with this name & catagory
    *start_time = 730;
}

int main() {

    struct task *current;
    struct task *previous;
    int start_time;
    find_node_and_prev(tl, &current, &previous, &start_time);

    return 0;
}