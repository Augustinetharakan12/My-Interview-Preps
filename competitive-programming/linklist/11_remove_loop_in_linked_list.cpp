void removeTheLoop(Node *head) {
	Node *slow, *fast, *temp, *prev;
	slow = head;
	fast = head->next;

	while(fast != slow) {
		slow = slow->next;
		fast = fast->next;
		fast = fast == NULL ? NULL:fast->next;
		if(fast == NULL) break;
	}

	if(fast == NULL) return;

	while(slow->data > 0) {
		slow->data = -1 * slow->data;
		slow = slow->next;
	}

	temp = head;
	while(temp->data > 0) {
		temp = temp->next;
	}

	prev = temp;
	while(temp->data < 0) {
		temp->data = temp->data * -1;
		prev = temp;
		temp = temp->next;
	}

	prev->next = NULL;

}
