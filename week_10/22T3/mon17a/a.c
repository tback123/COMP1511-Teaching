struct node *ptr = NULL;
    struct node *follow = NULL;



   ptr = head;



   if (ptr->next != NULL && ptr !=NULL) {
        follow = head;
        follow = follow->next;
        while (ptr->next != NULL){
            ptr = ptr->next;
            follow = follow->next;
        }
        follow->next = NULL;
        free(follow);
    }
    else {
        return head;
    }
    return head;
}