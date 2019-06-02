int intersectPoint(Node* head1, Node* head2) {
    Node *ptr;
    bool flag = 0;
    int data;

    ptr = head1;

    while(ptr != NULL) {
        data = ptr -> data;
        ptr -> data = -1*(data);
        ptr = ptr -> next;
    }

    ptr = head2;

    while(ptr != NULL) {
        data = ptr -> data;
        if(data < 0){flag=1; break;}
        ptr = ptr->next;
    }

    if(flag == 0)
        return -1;
    else
        return -1*data;
}
