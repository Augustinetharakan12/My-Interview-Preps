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
	Node *head, *ptr, *temp, *last, *end;
	int i, t, n, size, num;
	bool flag;

	cin >> t;

	while(t--) {

		flag = 0;
		head = NULL;

		cin >> size;

		cin >> n;

		for(i=0; i<size; i++) {
			cin >> num;
			ptr = new Node(num);

			if(head == NULL)
				head = ptr;
			else
				last -> next = ptr;
			last = ptr;
		}

		end = head;
		while(n) {
			if(end == NULL) {
				flag = 1;
				break;
			}
			else {
				end = end->next;
			}
			n--;
		}

		if(flag == 0) {
			temp = head;
			while(end != NULL) {
				temp = temp->next;
				end = end->next;
			}
			cout << temp->data;
		}
		else
			cout << "Not enough elements";
	}
}
