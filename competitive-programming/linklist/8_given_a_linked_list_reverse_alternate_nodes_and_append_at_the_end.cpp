node * reverse(node * head) {
    node *a, *b, *c;
    a = head;
    if( a == NULL) return a;
    b = a->next;
    a -> next = NULL;
    c = b == NULL ? NULL: b -> next;
    
    while(b != NULL) {
        b -> next = a;
        a = b;
        b = c;
        c = b == NULL ? NULL:b -> next;
    }
    return a;
}

void rearrange(struct node *odd)
{
    node *head_1, *head_2, *ptr_1, *ptr_2;
    
    head_1 = odd;
    ptr_1 = head_1;
    ptr_2 = head_1 -> next;
    head_2 = ptr_2;
    
    while(ptr_2 != NULL) {
        if(ptr_2 -> next == NULL ) break;
        ptr_1 -> next = ptr_2 -> next;
        ptr_2 -> next = ptr_2 -> next == NULL ? NULL:ptr_2->next->next;
        ptr_1 = ptr_1 -> next;
        ptr_2 = ptr_2 == NULL ? NULL:ptr_2->next;
    }
    
    head_2 = reverse(head_2);
    
    ptr_1 -> next = head_2;
    
}
