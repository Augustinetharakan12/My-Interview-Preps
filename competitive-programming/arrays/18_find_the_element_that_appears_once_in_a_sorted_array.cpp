#include <iostream>

using namespace std;

int main () {
	int arr[100], size, i;

	cout << "Enter the size of the array";
	cin >> size;

	for(i=0; i<size; i++)
		cin >> arr[i];

	for(i=0; i<size-1; i=i+1)
		if(arr[i]!=arr[i+1])
			break;

	printf("%d", arr[i]);
}
