Node* deleteAllOccurances(Node *head,int x) {
    Node *ptr, *prev;
    prev = head;
    ptr = head -> next;

    while(ptr != NULL) {
        if(ptr -> data == x) prev -> next = ptr -> next;
        else prev = ptr;
        ptr = ptr -> next;
    }

    while(head -> data == x) { head = head->next; }

    return head;

}
