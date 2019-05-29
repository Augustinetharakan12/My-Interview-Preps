int detectloop(Node *head) {

    Node *slow, *speed;
    int ret = 0;

    slow = head;
    speed = head->next;
    while(speed != NULL) {
        if(slow == speed) {
            ret = 1;
            break;
        }
        slow = slow->next;
        speed = speed->next;
        if(speed == NULL) {
            ret = 0;
            break;
        }
        else speed = speed->next;
    }
    return ret;
}
