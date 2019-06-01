void deleteNode(Node *node) {
   // Your code here
   Node *ptr, *prev;
   ptr = node;
   while(ptr->next != NULL) {
       ptr->data = ptr->next->data;
       prev = ptr;
       ptr = ptr->next;
   }
   prev -> next = NULL;
}
