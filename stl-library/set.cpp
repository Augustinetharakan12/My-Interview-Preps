#include <bits/stdc++.h>

using namespace std;

int main() {
	set <int, greater <int> > se;
	set <int, greater <int> > :: iterator se2;

	se.insert(1);
	se.insert(2);
	se.insert(1); // this will not be inserted as it will create a duplicate

	// Beginning and end of a set
	cout << "The contents of the set is\n";
	for (se2 = se.begin(); se2 != se.end(); ++se2) {
		cout << '\t' << *se2;
	}

	// To get the size of the set
	cout << endl << "The size of the set is " << se.size();

	// Max elements that a set can hold
	cout << endl << "The max size is " << se.max_size();

	// To check if a set is empty
	if(se.empty())
		cout << endl << "The set is empty";
	else
		cout << endl<< "The set is not empty";

	return 0;
}
