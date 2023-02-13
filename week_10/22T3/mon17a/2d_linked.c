
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct parent {
    int age;
    struct parent *next;
    struct child *head;
};

struct child {
    int data;
    struct child *next;
};

int main() {


    return 0;
}

void update_children(struct parent *a) {

    struct child *first_child = a->head;

}
