#include <bits/stdc++.h>

using namespace std;
struct Node {
	int data;
	Node *next;
	Node(int d) {
		data = d;
		next = NULL;
	}
};

Node *reverse_link_list(Node *head) {
	Node *a, *b, *c;
	a = head;
	b = a -> next;
	a -> next = NULL;
	c = b == NULL ? NULL:b->next;

	while(b != NULL) {
		b -> next = a;
		a = b;
		b = c;
		c = b == NULL ? NULL: b-> next;
	}

	return a;
}

int main() {
	int i, t, size, num, ma;
	Node *head, *ptr, *prev;

	cin >> t;

	while(t--) {

		head = NULL;

		cin >> size;

		for(i=0; i<size; i++) {
			cin >> num;
			ptr = new Node(num);
			if(head == NULL) head = ptr;
			else prev->next = ptr;
			prev = ptr;
		}

		head = reverse_link_list(head);

		ptr = head;
		ma = head->data;
		ptr = ptr->next;

		while(ptr != NULL) {
			if(ptr->data >= ma) ma = ptr -> data;
			else {
				prev -> next = ptr -> next ;
				ptr = prev;
			}
			prev = ptr;
			if(ptr != NULL) ptr = ptr -> next;
		}

		head = reverse_link_list(head);

		ptr = head;
		while(ptr != NULL) {
			cout << ptr->data << " ";
			ptr = ptr->next;
		}

		cout << "\n";
	}
}
