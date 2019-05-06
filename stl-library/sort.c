#include <iostream>
#include <algorithm>

using namespace std;

int main () {
	int size, arr[100], i;
	cout << "Enter the size of the array";
	cin >> size;

	for(i=0; i<size; i++)
		cin >> arr[i];

	sort(arr, arr+size);

	for(i=0; i<size; i++)
		cout << arr[i];
}
