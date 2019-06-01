#include <bits/stdc++.h>

using namespace std;

void showStack(stack <int> s) {
	if(s.empty()) {
		cout << "\nThe stack is empty ";
	}
	else {
		while(!s.empty()) {
			cout << s.top();
			s.pop();
		}
	}
}

int main() {
	stack <int> s;

	// push an element
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);

	// pop an element
	cout << "\nPopped element is " << s.top();
	s.pop();

	// check if its empty
	if(s.empty())
		cout << "\nThe stack is empty ";
	else
		cout << "\nThe stack is not empty ";

	// size of the stack
	cout << "\nSize of the stack is " << s.size();

	// top of the stack
	cout << "\nThe top of the stack is " << s.top();

	// To display the stack ( call by value )
	cout << "\nThe contents of the stack are ";
	showStack(s);

}
