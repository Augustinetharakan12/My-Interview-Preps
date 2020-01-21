#include <bits/stdc++.h>

using namespace std;

struct Node {
	int data;
	struct Node *l, *r;
	Node(int data) {
		this -> data = data;
		this -> l = NULL;
		this -> r = NULL;
	}
}*stack[100], *head=NULL;

void insert(struct Node *root, int element) {
	while(root != NULL) {
		if(element > root -> data) {
			if(root -> r == NULL) {
				root -> r = new Node(element);
				return;
			}
			else root = root -> r;
		}
		else {
			if(root -> l == NULL) {
			root -> l = new Node(element);
					return;
			}
			else root = root -> l;
		}
	}
}

void print_inorder(Node *root) {
	if(root == NULL) return;
	print_inorder(root -> l);
	cout << "\n" << root -> data;
	print_inorder(root -> r);
}

void find_height(Node *head) {
	Node *stack_l[100], *stack_r[100], *cur_el;
	int top_l=0, top_r=0, max_height=1, temp_height=0;

	stack_l[top_l++] = head;

	while(top_l > 0) {
		// cout << " " << top_l << " " << top_r << " ";
		cur_el = stack_l[top_l-1];
		// cout << cur_el -> data << "\n";
		if(cur_el -> l != NULL) {
			stack_l[top_l] = cur_el -> l;
			top_l++;
		}
		else {
			if(cur_el -> r != NULL) {
				stack_l[top_l] = cur_el -> r;
				top_l++;
				continue;
			}
		}
		if(cur_el -> r != NULL){
			stack_r[top_r] = cur_el -> r;
			top_r++;
		}
		if(cur_el -> l == NULL && cur_el -> r == NULL) {
			if(top_l > max_height) max_height = top_l;
			// backtrack
			if(top_r == 0) top_l = 0;
			else {
				while(1 && top_l > 0) {
					if(stack_l[top_l-1] -> r == stack_r[top_r-1]) {
						stack_l[top_l++] = stack_r[top_r-1];
						top_r--;
						break;
					}
					else top_l--;
				}
			}
		}

	}
	cout << "\nThe height is " << max_height;
}

int main() {
	int n, el;

	cout << "Enter the number of nodes";
	cin >> n;

	while(n>0) {
		cout << "Enter the element";
		cin >> el;
		if(head == NULL) head = new Node(el);
		else insert(head, el);
		n--;
	}
	print_inorder(head);
	find_height(head);
}
