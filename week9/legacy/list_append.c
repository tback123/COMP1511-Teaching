#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define MAX_LENGTH 100

struct node {
    struct node *next;
    int          data;
};

struct node *list_append(struct node *list1, struct node *list2);
struct node *strings_to_list(int len, int *nums);
void print_list(struct node *head);

// DO NOT CHANGE THIS MAIN FUNCTION

int main(void) {
    int nums1[MAX_LENGTH];
    int len1 = 0;
    while (len1 < MAX_LENGTH && scanf("%d", &nums1[len1]) == 1) {
        len1++;
    }
    struct node *list1 = NULL;
    if (len1 >= 1) {
        list1 = strings_to_list(len1, nums1);
    }

    int nums2[MAX_LENGTH];
    int len2 = 0;
    while (len2 < MAX_LENGTH && scanf("%d", &nums2[len2]) == 1) {
        len2++;
    }
    struct node *list2 = NULL;
    if (len2 >= 1) {
        list2 = strings_to_list(len2, nums2);
    }
    struct node *new_head = list_append(list1, list2);
    print_list(new_head);

    return 0;
}

///////////////////////////////////////////////////////////////////////
// append list2 to the end of list1 and return the head of the new list.
struct node *list_append(struct node *list1, struct node *list2) {
    // deal with edge cases
    if (list1 == NULL) {
        return list2;
    }

    // get to the end of list1
    struct node *curr = list1;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    // link the last node of list1 to the first node of list2
    curr->next = list2;
    return list1;
}
//////////////////////////////////////////////////////////////////////

// DO NOT CHANGE THIS FUNCTION
// create linked list from array of strings
struct node *strings_to_list(int len, int *nums) {
    struct node *head = NULL;
    int i = len - 1;
    while (i >= 0) {
        struct node *n = malloc(sizeof (struct node));
        assert(n != NULL);
        n->next = head;
        n->data = nums[i];
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
