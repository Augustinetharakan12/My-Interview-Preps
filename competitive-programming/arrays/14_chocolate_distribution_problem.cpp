#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;

struct node {
	int data;
	class node *next;
}*head=NULL, *temp, *previous=NULL, *ptr, *front, *back;

int main() {
	int i, j, flag = 0, packets, children_count, size, smallest, difference, min_difference;

	cout << "Enter the number of packets";
	cin >> packets;

	cout << "Enter the number of children";
	cin >> children_count;

	cout << "Enter the number of chocolates in each packet";
	for(i=0; i<packets; i++) {
		ptr = (struct node*)malloc(sizeof(struct node));
		cin >> ptr->data;
		ptr->next = NULL;

		if(head == NULL) {
			head = ptr;
		}

		else {
			previous = NULL;
			for(temp = head; temp!=NULL; temp = temp->next) {
				if(ptr->data < temp->data) {
					if(previous == NULL){
						flag = 1;
						ptr->next = head;
						head = ptr;
						break;
					}
					else {
						flag = 1;
						ptr->next = temp;
						previous->next = ptr;
						break;
					}
				}
				previous = temp;
			}
			if(flag == 0)
				previous->next = ptr;
		}
	}

	temp = head;
	while(children_count > 1) {
		temp = temp->next;
		children_count --;
	}
	front = head;
	back = temp;

	min_difference = back->data - front->data;
	while(back != NULL ) {
		difference = back->data - front->data;
		if(difference < min_difference)
			min_difference = difference;
		front = front->next;
		back = back->next;
	}

	cout << "Min difference " << min_difference << "\n";

	for(temp = head; temp!=NULL; temp=temp->next)
		cout << " " << temp->data;

}
