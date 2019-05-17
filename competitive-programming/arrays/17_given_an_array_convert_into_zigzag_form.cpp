#include <bits/stdc++.h>

using namespace std;

int main() {
	int size, arr[100], i, j, temp;

	cout << "Enter the size of the array";
	cin >> size;

	for(i=0; i<size; i++)
		cin >> arr[i];

	for(i=0; i<size-1; i++)
		for(j=i+1; j<size; j++)
			if(arr[j] < arr[i]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}

	for(i=1; i<size-1; i=i+2) {
		temp = arr[i];
		arr[i] = arr[i+1];
		arr[i+1] = temp;
	}

	for(i=0; i<size; i++)
		cout << "\n" << arr[i];
}
