#include <bits/stdc++.h>

using namespace std;

struct node {
	int d;
	struct node *next;
	node(int data) {
		d = data;
		next = NULL;
	}
}*head, *font, *back;

int main () {
	int data, n;

	head = new node(1);
	head->next = new node(2);
	head->next->next = new node(3);
	head->next->next->next = new node(4);
	head->next->next->next->next = new node(5);

	front = head;
	back = head;

	n = 3;

	while(n > 1) {
		back = back->next;
		n--;
	}

	while(back->next != NULL) {
		front = front->next;
		back = back->next;
	}

	cout << front->d;
}
