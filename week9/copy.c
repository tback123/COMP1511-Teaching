struct node {
	int data;
	struct node *next;
}

// create a copy of a list
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

// creates a node with a given input value
struct node *create_node(int value) {
	struct node *new_node = malloc(sizeof(struct node));
	new_node->data = value;
	new_node->next = NULL;
}
