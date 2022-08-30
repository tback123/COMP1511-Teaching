
#define MAX_STR_LENGTH 1024

struct node {
    char data[MAX_STR_LENGTH];
    struct node *next;
};

struct list {
    struct node *nodes;
};

// Creates a new struct list and returns a pointer to it.
struct list *create_list();

// Pushes a new node to the head of a given linked list
void push_head(struct list *list, char *value);

// Pushes a new node to the tail of a given linked list
void push_tail(struct list *list, char *value);

// Pops the node at the head of a given linked list and returns it
struct node *pop_front(struct list *list);

// Pops the node at the tail of a given linked list and returns it
struct node *pop_back(struct list *list);

// Insert a new node at position `index` of a linked list. If index is negative,
// inserts at head, if index is larger than size, inserts at tail.
void insert_at_index(struct list *list, char *value, int index);

// Returns the data at the head of the given linked list
char *peek_top(struct list *list);

// Returns the data at the `index` node in the given linked list. Returns
// NULL if index not in range.
char *peek_index(struct list *list, int index);

// Prints a given linked list from head to tail
void print_list(struct list *list);