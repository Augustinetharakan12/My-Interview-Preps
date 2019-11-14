#include <bits/stdc++.h>

using namespace std;

struct Node {
	int data;
	struct Node *next;
	Node(int data) {
		this -> data = data;
		this -> next = NULL;
	}
}*head;

struct Node* create_link_list(int number) {
	struct Node *temp_head=NULL, *prev=NULL, *new_node;

	while(number > 0) {
		new_node = new Node(number%10);
		if(temp_head == NULL) {
			temp_head = new_node;
			prev = temp_head;
		}
		else
			prev -> next = new_node;
		prev = new_node;
		number /= 10;
	}
	return temp_head;
}

void display(struct Node *h) {
	head = h;

	cout << "\n";
	while(head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
}


struct Node* find_sum(struct Node *num1, struct Node *num2) {
	int carry = 0;
	struct Node *prev1=NULL, *prev2;

	if(num1 == NULL) return num2;
	else if(num2 == NULL) return num1;

	struct Node *head = num1;

	while(num1 != NULL && num2 != NULL) {
		carry = num1 -> data + num2 -> data + carry;
		num1 -> data = carry%10;
		carry /= 10;
		prev1 = num1;
		prev2 = num2;
		num1 = num1 -> next;
		num2 = num2 -> next;
	}
	while(num1 != NULL) {
		carry = num1 -> data + carry;
		num1 -> data = carry%10;
		carry /= 10;
		num1 = num1 -> next;
	}
	if(num2 != NULL) {
		prev1 -> next = num2;
		num2 = prev1;
	}
	while(num2 != NULL) {
		num2 -> data = num2 -> data + carry;
		prev2 = num2;
		num2 = num2 -> next;
		carry /= 10;
	}
	while(carry > 0) {
		cout << "inside while " << carry;
		prev1 -> next = new Node(carry%10);
		carry /= 10;
		prev1 = prev1 -> next;
	}
	return head;
}


int main() {
	struct Node *num1, *num2;
	int num;

	cout << "Enter the first number";
	cin >> num;

	num1 = create_link_list(num);

	cout << "Enter the second number";
	cin >> num;

	num2 = create_link_list(num);

	display(num1);
	cout << "\n";

	display(num2);

	num1 = find_sum(num1, num2);
	display(num1);

}
