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

int main() {
	int t, i, size, num, k;
	Node *head, *ptr, *prev, *a, *b, *c, *prev_sub_first, *cur_sub_first, *n_head;

	cin >> t;

	while(t--) {
		cin >> size;

		head = NULL;

		for(i=0; i<size;i++) {
			cin >> num;
			ptr = new Node(num);
			if(head == NULL) head = ptr;
			else prev->next = ptr;
			prev = ptr;
		}

		cin >> k;

		a = head;
		b = a->next;
		a -> next = NULL;
		c = b->next;

		n_head = NULL;

		cur_sub_first = head;
		prev_sub_first = head;

		for(i=0; i<size; i++) {
			if((i+1)%k == 0) {
				if(n_head == NULL) n_head = a;
				else prev_sub_first -> next = a;

				a = b;
				b = c;
				if(b!=NULL) c = b->next;
				else{cur_sub_first->next=a; cur_sub_first=a; break;}
			}
			else {
				if((i+1)%k == 1) {
					prev_sub_first = cur_sub_first;
					cur_sub_first = a;
				}
				b->next = a;
				a = b;
				b = c;
				if(b!=NULL) c = c->next;
				else {prev_sub_first->next=a;break;}
			}
		}

		if(n_head == NULL)
			n_head = a;

		cur_sub_first -> next = NULL;

		ptr = n_head;

		while(ptr!=NULL) {
			cout << ptr->data << " ";
			ptr = ptr->next;
		}
		cout << "\n";
	}
}
