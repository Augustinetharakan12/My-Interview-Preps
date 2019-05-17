#include <bits/stdc++.h>

using namespace std;

int main () {
	int size, arr[100], largest, pos, i;
	bool flag = true;

	cout << "Enter the size of the array";
	cin >> size;

	for(i=0; i<size; i++)
		cin >> arr[i];

	largest = arr[0];
	pos = 0;

	flag = true;

	for(i=1; i<size; i++) {
		if(arr[i] >= largest) {
			largest = arr[i];
			if(flag == false) {
				flag = true;
				pos = i;
			}
		}
		else
			flag = false;

	}
	if(flag == true)
		cout << "\n" << arr[pos];
	else
		cout << "\nNo such element found";
}
