#include <bits/stdc++.h>

using namespace std;

void display_deque(deque <int> de) {
	deque <int> :: iterator it;
	for(it = de.begin(); it!=de.end(); it++)
		cout << *it << " ";
}

int main() {
	deque <int> de;

	// For pushing in the front
	de.push_front(1);

	// For pushing in the back
	de.push_back(10);

	de.push_back(9);
	de.push_front(2);

	display_deque(de);

	// To get the size
	cout << "\n" << de.size();

	// To get the element in ith position
	cout << "\n" << de.at(2);

	// Front and back elements
	cout << "\n" << de.front() << " " << de.back();

	//Pop front, back
	de.pop_front();
	de.pop_back();

	return 0;
}
