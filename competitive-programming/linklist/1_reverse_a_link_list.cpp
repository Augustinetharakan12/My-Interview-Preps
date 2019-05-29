#include <bits/stdc++.h>

using namespace std;

struct node {
	int data;
	struct node *next;
	node(int d) {
		data = d;
		next = NULL;
	}
};

int main() {
	int limit, arr_size, t, num, i, link_list_size;
	node *head, *temp, *last, *a, *b, *c;

	cin >> t;

	while(t--) {
		cin >> link_list_size;

		head = NULL;

		for(i=0; i<link_list_size; i++) {
			cin >> num;
			temp = new node(num);
			if(head == NULL)
				head = temp;
			else
				last->next = temp;
			last = temp;
		}

		temp = head;

		a = head;
		b = head->next;
		a->next = NULL;

		if(b != NULL)
			c = b->next;

		while(b!=NULL) {
			b->next = a;
			a = b;
			b = c;
			if(c != NULL)
				c = c->next;
		}

		head = a;
		temp = head;

		while(temp != NULL) {
			cout << temp->data << " ";
			temp = temp->next;
		}

		cout << "\n";
	}
}
