#include <bits/stdc++.h>

using namespace std;

void showQueue(queue <int> qu) {
	while(!qu.empty()) {
		cout << qu.front() << " ";
		qu.pop();
	}
}

int main() {
	queue <int> qu, qu2;

	// For inserting into the queue
	qu.push(1);
	qu.push(2);
	qu.push(3);

	// For removing an element from the queue
	qu.pop();

	// To check if the queue is empty or not
	if(qu.empty())
		cout << "The queue is empty";
	else
		cout << "The queue is not empty";

	// Te get the size of the queue
	cout << "\nThe size of the queue is " << qu.size();

	// To get the front and back of the queue
	cout << "\nThe front of the queue is " << qu.front() << "\nThe back of the queue is " << qu.back();

	// Insert a new element into the queue container
	qu.emplace(4);

	// To swap contents of two queue
	qu.swap(qu2);

	cout << "\nThe contents of the queue are ";
	showQueue(qu2);
}
