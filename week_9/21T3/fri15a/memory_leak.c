int i = 0;
struct node *head = NULL;

while (i < 3) {
    // `insert_first` is a function which malloc's a new node, 
    // inserts it at the head of the list, and
    // returns it.
    head = insert_first(i, head);
    i++;
}

free(head);

// How many non-deleted nodes will there be?
/*
    - 3 nodes left
    - 2 nodes left
    - 1 nodes left
    - 0 nodes left

*/