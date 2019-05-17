#include <iostream>

using namespace std;

int main () {
	int limit, ,limit2, arr[100], arr2[100], arr3[100], i, j, k;

	cout << "Enter the size of the array";
	cin >> limit;

	for(i=0; i<limit; i++)
		cin >> arr[i];

	cout << "Enter the size of the second array";
	cin >> limit2;

	for(i=0; i<limit2; i++)
		cin >> arr2[i];

	k = 0;

	for(i=0; i<limit2; i++) {
		for(j=0; j<limit ;j++) {
			if(arr2[i] == arr[j]) {
				arr3[k++] = arr2[i];
				arr[j] =  -1;
			}
		}
	}

	for(i=0; i<limit; i++)
		if(arr[i] != -1) {
			arr3[k++] = arr[i];
		}

	for(i=0; i<k; i++)
		cout << " " << arr3[i];
}
