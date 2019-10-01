void convert(Node *head, TreeNode *&root) {
    // Your code here
    TreeNode *tree_node, *current_node, *q[10000];;
    int q_size = 1, q_top=0;

    root = new TreeNode(head->data);
    q[0] = root;
    head = head -> next;
    while(head != NULL) {
        current_node = q[q_top];
        tree_node = new TreeNode(head->data);
        if(current_node -> left == NULL) current_node -> left = tree_node;
        else if(current_node -> right == NULL) current_node -> right = tree_node;
        else {q_top++; current_node = q[q_top]; current_node->left=tree_node; }
        q[q_size++] = tree_node;
        head = head->next;
    }
}
