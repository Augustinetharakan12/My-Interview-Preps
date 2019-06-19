Node* merge(Node *first, Node *second) {
    Node *head, *a, *b, *c, *d, *prev;

    if(first == NULL) return second;
    if(second == NULL) return first;

    a = first;
    b = first -> next;

    c = second;
    d = second -> next;

    if(a->data < c->data ) {
        prev=a;
        head=a;
        a=b;
        b = b == NULL ? NULL:b->next;
    }
    else {
        prev=c;
        head=c;
        c=d;
        d = d == NULL ? NULL:d->next;
    }

    while(a != NULL && c != NULL) {
        if(a-> data < c-> data ) {
            prev->next = a;
            prev = a;
            a = b;
            b = b == NULL ? NULL:b->next;
        }
        else {
            prev->next=c;
            prev = c;
            c = d;
            d = d == NULL ? NULL:d->next;
        }
    }

    if(a!=NULL) prev -> next = a;
    else prev -> next = c;
    return head;
}

Node * mergeKList(Node *arr[], int N) {
    Node *head = arr[0], *ptr;
    int i;

    for(i=1; i<N; i++) {
        head = merge(head, arr[i]);
    }
    return head;
}
